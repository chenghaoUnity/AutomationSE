using UnityEditor;

namespace UnityEngine.Analytics.Experimental
{
    /// <summary>
    /// Read-only field property drawer.
    /// </summary>
    [CustomPropertyDrawer(typeof(ReadOnlyFieldAttribute))]
    public class ReadOnlyFieldDrawer : PropertyDrawer
    {
        /// <summary>
        /// Makes the GUI for the property.
        /// <remarks>
        /// Use this to display a serialized field, but not allow the field to be edited.
        /// </remarks>
        /// </summary>
        /// <param name="position">Rectangle on the screen to use for the property GUI.</param>
        /// <param name="property">The <c>SerializedProperty</c> to make the custom GUI for.</param>
        /// <param name="label">The label of this property.</param>
        public override void OnGUI (Rect position, SerializedProperty property, GUIContent label)
        {
            string valueStr;

            switch (property.propertyType)
            {
                case SerializedPropertyType.Integer:
                    valueStr = property.intValue.ToString();
                    break;
                case SerializedPropertyType.Boolean:
                    valueStr = property.boolValue.ToString();
                    break;
                case SerializedPropertyType.Float:
                    valueStr = property.floatValue.ToString("0.00000");
                    break;
                case SerializedPropertyType.String:
                    valueStr = property.stringValue;
                    break;
                default:
                    valueStr = "(not supported)";
                break;
            }

            EditorGUI.LabelField(position,label.text, valueStr);
        }
    }
}