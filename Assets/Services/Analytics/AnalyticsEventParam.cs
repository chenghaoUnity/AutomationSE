using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using UnityEngine;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// The serializable container class for individual analytics event data params.
    /// </summary>
    [Serializable]
    public class AnalyticsEventParam
    {
        //[SerializeField] bool m_TargetDriven;
        //[SerializeField] Object m_Target;
        //[SerializeField] string m_TargetFieldName; 

        [SerializeField] string m_ParamName, m_ParamValue, m_ParamTypeName;

        /// <summary>
        /// Initializes a new instance of the <see cref="T:UnityEngine.Analytics.Experimental.AnalyticsEventParam"/> class.
        /// </summary>
        /// <param name="name">The name of the event data param.</param>
        public AnalyticsEventParam (string name)
        {
            this.name = name;
        }

        /// <summary>
        /// Initializes a new instance of the <see cref="T:UnityEngine.Analytics.Experimental.AnalyticsEventParam"/> class.
        /// </summary>
        /// <param name="name">The name of the event data param.</param>
        /// <param name="value">Value.</param>
        public AnalyticsEventParam (string name, object value)
        {
            this.name = name;

            SetValue(value);
        }

        /// <summary>
        /// Gets or sets the name of the event data param.
        /// </summary>
        /// <value>The param name.</value>
        public string name
        {
            get { return m_ParamName; }
            set { m_ParamName = value; }
        }

        /// <summary>
        /// Gets the value of the event data param.
        /// </summary>
        /// <value>The param value.</value>
        public object value
        {
            get 
            {
                Type paramType = type;
                object paramValue = null;

                if (paramType == typeof(char))
                    paramValue = m_ParamValue[0];
                else if (paramType == typeof(sbyte))
                    paramValue = sbyte.Parse(m_ParamValue);
                else if (paramType == typeof(byte))
                    paramValue = byte.Parse(m_ParamValue);
                else if (paramType == typeof(short))
                    paramValue = short.Parse(m_ParamValue);
                else if (paramType == typeof(ushort))
                    paramValue = ushort.Parse(m_ParamValue);
                else if (paramType == typeof(int))
                    paramValue = int.Parse(m_ParamValue);
                else if (paramType == typeof(uint))
                    paramValue = uint.Parse(m_ParamValue);
                else if (paramType == typeof(long))
                    paramValue = long.Parse(m_ParamValue);
                else if (paramType == typeof(ulong))
                    paramValue = ulong.Parse(m_ParamValue);
                else if (paramType == typeof(bool))
                    paramValue = bool.Parse(m_ParamValue);
                else if (paramType == typeof(float))
                    paramValue = float.Parse(m_ParamValue);
                else if (paramType == typeof(double))
                    paramValue = double.Parse(m_ParamValue);
                else if (paramType == typeof(decimal))
                    paramValue = decimal.Parse(m_ParamValue);
                else
                    paramValue = m_ParamValue;

                return paramValue;
            }
        }

        /// <summary>
        /// Gets the type of the value assigned to the event data param, prior to serialization.
        /// <remarks>
        /// Supported types include <c>bool</c>, <c>string</c>, and numeric value types.
        /// </remarks>
        /// </summary>
        /// <value>The original value type.</value>
        public Type type
        {
            get { return Type.GetType(m_ParamTypeName); }
        }

        /// <summary>
        /// Sets the value assigned to the event data param.
        /// </summary>
        /// <param name="value">The param value.</param>
        public void SetValue (object value)
        {
            if (value == null)
            {
                m_ParamValue = null;
                m_ParamTypeName = null;
                return;
            }

            var valueType = value.GetType();
            m_ParamTypeName = valueType.ToString();

            if (value is string)
            {
                m_ParamValue = string.IsNullOrEmpty((string)value) ? null : (string)value;
            }
            else if (valueType.IsEnum)
            {
                m_ParamValue = ConvertEnumToString(value);
            }
            else if (valueType.IsValueType)
            {
                m_ParamValue = value.ToString();
            }
            else
            {
                throw new ArgumentException(string.Format("Invalid type: {0} passed", type));
            }
        }

        /// <summary>
        /// Gets the enum value assigned to the event data param.
        /// <remarks>
        /// Type <c>T</c> must match the assigned param value type.
        /// </remarks>
        /// </summary>
        /// <returns>The enum value.</returns>
        /// <typeparam name="T">The 1st type parameter.</typeparam>
        public T GetEnumValue<T> ()
        {
            if (!typeof(T).IsEnum)
            {
                throw new ArgumentException("T must be an enum type.");
            }

            if (!type.IsEnum)
            {
                throw new InvalidOperationException("Value type must be an enum type.");
            }

            if (typeof(T) != type)
            {
                throw new ArgumentException("T must match param value type: " + m_ParamTypeName);
            }

            var enumValues = Enum.GetValues(type) as T[];
            var stringValues = enumValues.AsQueryable().Select(x => ConvertEnumToString(x)).ToArray();
            var index = Array.IndexOf(stringValues, m_ParamValue);

            if (index >= 0)
            {
                return enumValues[index];
            }

            return default(T);
        }

        static string ConvertEnumToString (object value)
        {
            var enumType = value.GetType();

            if (!enumType.IsEnum)
            {
                throw new ArgumentException("Value must be an enum type.");
            }

            var stringValue = value.ToString();

            if (!enumType.Equals(typeof(AdvertisingNetwork)) &&
                !enumType.Equals(typeof(AuthorizationNetwork)) &&
                !enumType.Equals(typeof(SocialNetwork)))
            {
                stringValue = SplitCamelCase(stringValue);
            }

            stringValue = stringValue.ToLower();

            return (stringValue == "none") ? null : stringValue;
        }

        static string SplitCamelCase (string input)
        {
            input = Regex.Replace(input, "([a-z](?=[A-Z]))", "$0_");
            return Regex.Replace(input, "(?<!_|^)[A-Z][a-z]", "_$0");
        }
    }
}