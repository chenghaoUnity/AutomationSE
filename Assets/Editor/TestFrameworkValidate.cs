using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEditor;
using System;

[InitializeOnLoad]
public class TestFrameworkValidate 
{	
	static TestFrameworkValidate () 
	{
		TestSuite testSuite = new TestSuite();
		Type type = testSuite.GetType();

		foreach (MethodInfo mInfo in type.GetMethods()) 
		{
			CDTest attr = mInfo.GetCustomAttribute<CDTest>();

			if (attr != null)
			{
				if (attr.title.Contains(".") || attr.title.Contains("/") || attr.title == null)
				{
					throw new Exception(string.Format("Cannot have ./\\ in the title (Method :{0})", mInfo.Name));
				}

				if (attr.compareType == Assert.EventPayload)
				{
					if (attr.expectedResult.Count % 2 != 0)
					{
						throw new Exception(string.Format("Key-Value expected result is not set up correctly, missing key/value (Method :{0})", mInfo.Name));
					}

					continue;
				}

				if (attr.compareType == Assert.DoThrowException || attr.compareType == Assert.DoNotThrowException)
				{
					continue;
				}

				if (mInfo.ReturnType != typeof(string) && mInfo.ReturnType != typeof(float) && mInfo.ReturnType != typeof(bool) && mInfo.ReturnType != typeof(int))
				{
					throw new Exception(string.Format("Return type should be one of these: string/ float/ bool/ int (Method :{0})", mInfo.Name));
				}

				if (attr.expectedResult[0].GetType() == typeof(string))
				{
					if (mInfo.ReturnType != typeof(string))
					{
						throw new Exception(string.Format("Return type and expected value type are not matched (Method :{0})", mInfo.Name));
					}

					if (attr.compareType == Assert.Greater || attr.compareType == Assert.Less)
					{
						throw new Exception(string.Format("Cannot have Assert.{0} for this method (Method :{1})", attr.compareType, mInfo.Name));
					}
				}

				if (attr.expectedResult[0].GetType() == typeof(int))
				{
					if (mInfo.ReturnType != typeof(int))
					{
						throw new Exception(string.Format("Return type and expected value type are not matched (Method :{0})", mInfo.Name));
					}
				}

				if (attr.expectedResult[0].GetType() == typeof(bool))
				{
					if (mInfo.ReturnType != typeof(bool))
					{
						throw new Exception(string.Format("Return type and expected value type are not matched (Method :{0})", mInfo.Name));
					}

					if (attr.compareType == Assert.Greater || attr.compareType == Assert.Less)
					{
						throw new Exception(string.Format("Cannot have Assert.{0} for this method (Method :{1})", attr.compareType, mInfo.Name));
					}
				}

				if (attr.expectedResult[0].GetType() == typeof(float))
				{
					if (mInfo.ReturnType != typeof(float))
					{
						throw new Exception(string.Format("Return type and expected value type are not matched (Method :{0})", mInfo.Name));
					}
				}
			}
		}
	}
}