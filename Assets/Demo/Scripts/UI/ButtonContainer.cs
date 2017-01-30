using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ButtonContainer : MonoBehaviour
{
    Button[] m_Buttons;

    void Start ()
    {
        if (Equals(transform, null))
        {
            Debug.LogError("Panels Container is not set.");
            return;
        }

        m_Buttons = new Button[transform.childCount];

        for (int i = 0; i < m_Buttons.Length; i++)
        {
            var child = transform.GetChild(i);
            m_Buttons[i] = child.GetComponent<Button>();
        }

        if (m_Buttons.Length > 0) SelectButton(0);
    }

    public void SelectButton (int index)
    {
        for (int i = 0; i < m_Buttons.Length; i++)
        {
            m_Buttons[i].interactable = (i != index);
        }
    }
}
