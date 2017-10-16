using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public static class ABTestingWrapper
{
    const string version = "1.0.1";
    const string bucketA = "_a";
    const string bucketB = "_b";
    const string bucketDefault = "default";
    const double doubleZero = 0.0000001d;
    const double doubleOne = 1d;

    static string PlayerBucket = PlayerPrefs.GetString("unity_analytics_ab_test_bucket");
    static string testName = "missing";
    static float percentage_a;
    static float percentage_b;
    static float percentage_default;

    /// <summary>
    /// Shim for Remote Settings GetInt
    /// </summary>
    /// <returns>The int.</returns>
    /// <param name="key">Key.</param>
    /// <param name="defaultValue">Default value.</param>
    public static int GetInt(string key, int defaultValue = 0)
    {
        EnsureBucket(key);
        string bucketKey = GetBucketKey(key);
        return UnityEngine.RemoteSettings.GetInt(bucketKey, defaultValue);
    }

    /// <summary>
    /// Shim for RemoteSettings GetFloat
    /// </summary>
    /// <returns>The float.</returns>
    /// <param name="key">Key.</param>
    /// <param name="defaultValue">Default value.</param>
    public static float GetFloat(string key, float defaultValue = 0.0f)
    {
        EnsureBucket(key);
        string bucketKey = GetBucketKey(key);
        return UnityEngine.RemoteSettings.GetFloat(bucketKey, defaultValue);
    }

    /// <summary>
    /// Shim for RemoteSettings GetString
    /// </summary>
    /// <returns>The string.</returns>
    /// <param name="key">Key.</param>
    /// <param name="defaultValue">Default value.</param>
    public static string GetString(string key, string defaultValue = "")
    {
        EnsureBucket(key);
        string bucketKey = GetBucketKey(key);
        return UnityEngine.RemoteSettings.GetString(bucketKey, defaultValue);
    }

    /// <summary>
    /// Shim for RemoteSettings GetBool
    /// </summary>
    /// <returns><c>true</c>, if bool was gotten, <c>false</c> otherwise.</returns>
    /// <param name="key">Key.</param>
    /// <param name="defaultValue">If set to <c>true</c> default value.</param>
    public static bool GetBool(string key, bool defaultValue = false)
    {
        EnsureBucket(key);
        string bucketKey = GetBucketKey(key);
        return UnityEngine.RemoteSettings.GetBool(bucketKey, defaultValue);
    }

    // Make sure we have a bucket.
    private static void EnsureBucket(string key)
    {
        if (NeedsBucket())
        {
            AssignBucket();
        }
    }

    // Do we need a bucket or does it already exist?
    private static bool NeedsBucket()
    {
        return PercentageABKeyExists() && !PlayerBucketExists();
    }

    // Take a key and return it with the correct bucket suffix
    private static string GetBucketKey(string key)
    {
        string bucket = (PlayerBucket != bucketDefault) ? PlayerBucket : "";
        return (UnityEngine.RemoteSettings.HasKey(key + bucket)) ? key + bucket : key;
    }

    // Have we ever saved a bucket to PlayerPrefs?
    private static bool PlayerBucketExists()
    {
        return !string.IsNullOrEmpty(PlayerBucket);
    }

    // Do BOTH percentage_a and perentage_b exist?
    private static bool PercentageABKeyExists()
    {
        return (UnityEngine.RemoteSettings.HasKey("percentage_a") && UnityEngine.RemoteSettings.HasKey("percentage_b"));
    }

    // Put this player in a random bucket
    private static void AssignBucket()
    {
        SanitizeBucketProbabilities();
        var a = new ProportionValue(percentage_a, bucketA);
        var b = new ProportionValue(percentage_b, bucketB);
        var c = new ProportionValue(percentage_default, bucketDefault);

        var bucketList = new[] {
            a, b, c
        };
        string bucket = ChooseByRandom(bucketList);
        SetBucketPlayerPrefs(bucket);
    }

    // Save the player's bucket both locally and to the Analytics server
    private static void SetBucketPlayerPrefs(string bucketSuffix)
    {
        PlayerPrefs.SetString("unity_analytics_ab_test_bucket", bucketSuffix);
        PlayerPrefs.Save();
        PlayerBucket = PlayerPrefs.GetString("unity_analytics_ab_test_bucket");
        testName = UnityEngine.RemoteSettings.GetString("ab_test_name", "missing");

        Analytics.CustomEvent("ab_test_bucket_assignment", new Dictionary<string, object>
        {
            { "bucket_name", bucketSuffix },
            { "ab_test_name", testName }
        });
    }

    // Ensure percentage_a and percentage_b sum up to values between 0f-1f.
    private static void SanitizeBucketProbabilities()
    {
        percentage_a = UnityEngine.RemoteSettings.GetFloat("percentage_a", 0.0f);
        percentage_b = UnityEngine.RemoteSettings.GetFloat("percentage_b", 0.0f);

        if (AreNotValidPercentages(percentage_a, percentage_b))
        {
            percentage_a = 0.0f;
            percentage_b = 0.0f;
            percentage_default = 1.0f;
            throw new InvalidOperationException("Invalid percentage_a and percentage_b values");
        }
        else
        {
            percentage_default = 1f - (percentage_a + percentage_b);
        }
    }

    // struct to hold the likelihood of selection
    private struct ProportionValue
    {
        public float Proportion;
        public string Value;

        public ProportionValue(float proportion, string val)
        {
            this.Proportion = proportion;
            this.Value = val;
        }
    }

    // Chooses a bucket from a random value
    private static string ChooseByRandom(IEnumerable<ProportionValue> collection)
    {
        var rnd = UnityEngine.Random.value;
        foreach (var item in collection)
        {
            if (rnd < item.Proportion)
                return item.Value;
            rnd -= item.Proportion;
        }
        throw new InvalidOperationException("Invalid percentage_a and percentage_b values.");
    }

    // Validates if sum of double1 + double2 values OR individual values are less than 0d or greater than 1d.
    private static bool AreNotValidPercentages(double double1, double double2)
    {
        // Using a hard coded value instead of Epsilon due to a precision error when getting the target value.
        // For instance, the target value property of 2.3 is actually 2.29999995231628
        return (
                 (Math.Abs(double1 + double2) < doubleZero) || (Math.Abs(double1 + double2) > doubleOne) ||
                 (Math.Abs(double1) < doubleZero) || (Math.Abs(double2) < doubleZero) ||
                 (Math.Abs(double1) > doubleOne) || (Math.Abs(double2) > doubleOne)
               );

    }

    private static bool IsEqualToZero(double floatNum)
    {
        return Math.Abs(floatNum) <= doubleZero;
    }

}
