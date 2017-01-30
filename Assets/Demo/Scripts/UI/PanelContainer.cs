using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PanelContainer : MonoBehaviour 
{
    RectTransform[] m_Panels;

    void Start ()
    {
        if (Equals(transform, null))
        {
            Debug.LogError("Panels Container is not set.");
            return;
        }

        m_Panels = new RectTransform[transform.childCount];

        for (int i = 0; i < m_Panels.Length; i++)
        {
            var child = transform.GetChild(i);
            m_Panels[i] = child.GetComponent<RectTransform>();
        }

        if (m_Panels.Length > 0) SelectPanel(0);
    }

    public void SelectPanel (int index)
    {
        for (int i = 0; i < m_Panels.Length; i++)
        {
            m_Panels[i].gameObject.SetActive(i == index);
        }
    }
}
