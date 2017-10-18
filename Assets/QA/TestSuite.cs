using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.Analytics;
using System.Reflection;
public class TestSuite
{
	[CDTest(Assert.AreEquals, UnityVersion.Unity55_above, "|ABPlugin| Should Place User In Bucket If No Bucket Assigned", "20660", "default", "_a", "_b")]
	public string ShouldPlaceUserInBucketIfNoBucketAssigned()
	{
		PlayerPrefs.DeleteKey("unity_analytics_ab_test_bucket");
		ABTestingWrapper.GetInt("FakeKey", 4);
		return PlayerPrefs.GetString ("unity_analytics_ab_test_bucket", "Not_Found");
	}

	[CDTest(Assert.AreEquals, UnityVersion.Unity55_above, "|ABPlugin| Should Retrieve Correct Bucket Key For User_A", "20660", true)]
	public bool ShouldRetrieveCorrectBucketKeyForUser_A()
	{
		Type type = typeof(ABTestingWrapper);
		FieldInfo bucket = type.GetField("PlayerBucket", BindingFlags.NonPublic | BindingFlags.Static);
		bucket.SetValue(null, "_a");
		return RemoteSettings.GetString("player_clan_a") == ABTestingWrapper.GetString("player_clan", "Not_Found");
	}

	[CDTest(Assert.AreEquals, UnityVersion.Unity55_above, "|ABPlugin| Should Retrieve Correct Bucket Key For User_B", "20660", true)]
	public bool ShouldRetrieveCorrectBucketKeyForUser_B()
	{
		Type type = typeof(ABTestingWrapper);
		FieldInfo bucket = type.GetField("PlayerBucket", BindingFlags.NonPublic | BindingFlags.Static);
		bucket.SetValue(null, "_b");

		return RemoteSettings.GetString("player_clan_b") == ABTestingWrapper.GetString("player_clan", "Not_Found");
	}

	[CDTest(Assert.AreEquals, UnityVersion.Unity55_above, "|ABPlugin| Should Retrieve Correct Bucket Key For User_Default", "20660", true)]
	public bool ShouldRetrieveCorrectBucketKeyForUser_Default()
	{
		Type type = typeof(ABTestingWrapper);
		FieldInfo bucket = type.GetField("PlayerBucket", BindingFlags.NonPublic | BindingFlags.Static);
		bucket.SetValue(null, "default");

		return RemoteSettings.GetString("player_clan") == ABTestingWrapper.GetString("player_clan", "Not_Found");
	}

	[CDTest(Assert.DoThrowException, UnityVersion.Unity55_above, "|ABPlugin| Should Throw Exception With Invalid Percentages", "20660", typeof(InvalidOperationException))]
	public void ShouldThrowExceptionWithInvalidPercentages()
	{
		Debug.Log(ABTestingWrapper.GetString ("player_clan", "Not_Found"));
	}

//	[CDTest(Assert.AreEquals, UnityVersion.Unity55_above, "|ABPlugin| Should Assign Buckets Based On Percentages  (Case1)", "20660", 0.25f)]
//	public float ShouldAssignBucketsBasedOnPercentagesA()
//	{
//		float precentageA = 0.25f;
//		float precentageB = 0.25f;
//
//		Type type = typeof(ABTestingWrapper);
//		FieldInfo bucket = type.GetField("PlayerBucket", BindingFlags.NonPublic | BindingFlags.Static);
//		bucket.SetValue(null, "");
//		FieldInfo percentA = type.GetField("percentage_a", BindingFlags.NonPublic | BindingFlags.Static);
//		percentA.SetValue(null, precentageA);
//		FieldInfo percentB = type.GetField("percentage_b", BindingFlags.NonPublic | BindingFlags.Static);
//		percentB.SetValue(null, precentageB);
//
//		int countA = 0;
//		int countB = 0;
//		int countC = 0;
//		int runs = 10000;
//
//		for (int i = 0; i < runs; i++)
//		{
//			bucket.SetValue(null, "");
//			string result = ABTestingWrapper.GetString("player_clan", "Not_Found");
//
//			if (result.Contains("super_a_clan")) 
//			{
//				countA++;
//			} 
//			else if (result.Contains("super_b_clan"))
//			{
//				countB++;
//			} 
//			else 
//			{
//				countC++;
//			}
//		}
//
//		float percentCountA = (float) Math.Round(((float)countA / (float)runs), 2);
//		float percentCountB = (float) Math.Round(((float)countB / (float)runs), 2);
//		float percentCountC = (float) Math.Round(((float)countC / (float)runs), 2);
//
//		Debug.Log (percentCountA);
//		Debug.Log (percentCountB);
//		Debug.Log (percentCountC);
//
//		return percentCountA;
//	}
}
