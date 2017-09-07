using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public static class ABTestingWrapper
{
	#if UNITY_5_5_OR_NEWER

    const string version = "1.0.0";
    const string bucketA = "_a";
    const string bucketB = "_b";
    const string bucketDefault = "default";
    const float floatZero = 0.0f;

    static string PlayerBucket = PlayerPrefs.GetString("unity_analytics_ab_test_bucket");
    static string testName = "missing";
    static float percentage_a = UnityEngine.RemoteSettings.GetFloat("percentage_a", floatZero);
    static float percentage_b = UnityEngine.RemoteSettings.GetFloat("percentage_b", floatZero);
    static float percentage_default;

    public static int GetInt(string key, int defaultValue = 0)
    {
        if (string.IsNullOrEmpty(PlayerBucket))
        {
            AssignBucket();
        }
        string bucketKey = GetBucketKey(key);
        return UnityEngine.RemoteSettings.GetInt(bucketKey, defaultValue);
    }

    public static float GetFloat(string key, float defaultValue = floatZero)
    {
        if (string.IsNullOrEmpty(PlayerBucket))
        {
            AssignBucket();
        }
        string bucketKey = GetBucketKey(key);
        return UnityEngine.RemoteSettings.GetFloat(bucketKey, defaultValue);
    }

    public static string GetString(string key, string defaultValue = "")
    {
        if (string.IsNullOrEmpty(PlayerBucket))
        {
            AssignBucket();
        }
        string bucketKey = GetBucketKey(key);
        return UnityEngine.RemoteSettings.GetString(bucketKey, defaultValue);
    }

    public static bool GetBool(string key, bool defaultValue = false)
    {
        if (string.IsNullOrEmpty(PlayerBucket))
        {
            AssignBucket();
        }
        string bucketKey = GetBucketKey(key);
        return UnityEngine.RemoteSettings.GetBool(bucketKey, defaultValue);
    }

    private static string GetBucketKey(string key)
    {
        string bucket = PlayerBucket == bucketDefault ? "" : PlayerBucket;
        return key + bucket;
    }

    private static void AssignBucket()
    {
        SanitizeBucketProbabilities();
        var a = new ProportionValue(percentage_a, bucketA);
        var b = new ProportionValue(percentage_b, bucketB);
        var c = new ProportionValue(percentage_default, bucketDefault);

        var bucketList = new[] { 
            a, b, c
        };

        SetBucketPlayerPrefs(ChooseByRandom(bucketList));
    }

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

    private static void SanitizeBucketProbabilities()
	{
		if ((percentage_a + percentage_b - 1f) > 0.00001f || (percentage_a + percentage_b) < 0)
        {
            percentage_a = floatZero;
            percentage_b = floatZero;
            percentage_default = 1f;

			throw new InvalidOperationException("Invalid percentage_a and percentage_b values");
        }
        else
        {
            percentage_default = 1f - (percentage_a + percentage_b);
        }
    }

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

	private static string ChooseByRandom(
		this IEnumerable<ProportionValue> collection)
	{
		var rnd = UnityEngine.Random.value;

		foreach (var item in collection)
		{
			if (rnd < item.Proportion)
				return item.Value;
			rnd -= item.Proportion;
		}

		throw new InvalidOperationException("Invalid percentage_a and percentage_b values");
	}
	#endif
}


