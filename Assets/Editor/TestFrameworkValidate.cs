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
				if (attr.title.Contains(".") || attr.title.Contains("/"))
				{
					throw new Exception(string.Format("Cannot have ./\\ in the title (Method :{0})", mInfo.Name));
				}

				if (attr.compareType == Assert.EventPayload)
				{
					continue;
				}

				if (attr.expectedResult[0].GetType() == typeof(string))
				{
					if (attr.expectedResult.Count == 1)
					{
						if (mInfo.ReturnType != typeof(string))
						{
							throw new Exception(string.Format("Return type and expected value type are not matched (Method :{0})", mInfo.Name));
						}
					}
					else
					{
						if (mInfo.ReturnType != typeof(string[]))
						{
							throw new Exception(string.Format("Return length and expected value length are not matched (Method :{0})", mInfo.Name));
						}
					}

					if (attr.compareType == Assert.Greater || attr.compareType == Assert.Less)
					{
						throw new Exception(string.Format("Cannot have Assert.{0} for this method (Method :{1})", attr.compareType, mInfo.Name));
					}
				}

				if (attr.expectedResult[0].GetType() == typeof(int))
				{
					if (attr.expectedResult.Count == 1)
					{
						if (mInfo.ReturnType != typeof(int))
						{
							throw new Exception(string.Format("Return type and expected value type are not matched (Method :{0})", mInfo.Name));
						}
					}
					else
					{
						if (mInfo.ReturnType != typeof(int[]))
						{
							throw new Exception(string.Format("Return length and expected value length are not matched (Method :{0})", mInfo.Name));
						}
					}
				}

				if (attr.expectedResult[0].GetType() == typeof(bool))
				{
					if (attr.expectedResult.Count == 1)
					{
						if (mInfo.ReturnType != typeof(bool))
						{
							throw new Exception(string.Format("Return type and expected value type are not matched (Method :{0})", mInfo.Name));
						}
					}
					else
					{
						if (mInfo.ReturnType != typeof(bool[]))
						{
							throw new Exception(string.Format("Return length and expected value length are not matched (Method :{0})", mInfo.Name));
						}
					}

					if (attr.compareType == Assert.Greater || attr.compareType == Assert.Less)
					{
						throw new Exception(string.Format("Cannot have Assert.{0} for this method (Method :{1})", attr.compareType, mInfo.Name));
					}
				}

				if (attr.expectedResult[0].GetType() == typeof(float))
				{
					if (attr.expectedResult.Count == 1)
					{
						if (mInfo.ReturnType != typeof(float))
						{
							throw new Exception(string.Format("Return type and expected value type are not matched (Method :{0})", mInfo.Name));
						}
					}
					else
					{
						if (mInfo.ReturnType != typeof(float[]))
						{
							throw new Exception(string.Format("Return length and expected value length are not matched (Method :{0})", mInfo.Name));
						}
					}
				}
			}
		}
	}
}