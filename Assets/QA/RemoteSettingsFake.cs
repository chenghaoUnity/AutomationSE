using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class RemoteSettingsFake : MonoBehaviour
{
#if UNITY_2017_1_OR_NEWER
    public static RemoteSettingsFake GetInstance()
    {
        return GameObject.FindObjectOfType<RemoteSettingsFake>();
    }

    Dictionary<string, object> hashmap;
    bool _initilizeAction = false;
    bool _removeAction = false;
    bool _saveAction = false;

    public bool Ready()
    {
        return _initilizeAction == false && _removeAction == false && _saveAction == false;
    }

    public void Initilize()
    {
        StartCoroutine(_Initilize());
    }

    public void RemoveKey(string key)
    {
        StartCoroutine(_RemoveKey(key));
    }

    public void Save()
    {
        StartCoroutine(_Save());
    }

    public void SetString(string key, string value)
    {
        hashmap[key] = value;
    }

    public void SetFloat(string key, float value)
    {
        hashmap[key] = value;
    }

    public void SetInt(string key, int value)
    {
        hashmap[key] = value;
    }

    public void SetBool(string key, bool value)
    {
        hashmap[key] = value;
    }

    public IEnumerator _Initilize()
    {
        if (!Ready())
        {
            yield return new WaitForSeconds(0.5f);
        }

        hashmap = new Dictionary<string, object>();

        _initilizeAction = true;

        JsonNetwork.GetInstance().PostServerCommand("remoteSettings/initilize", "initilize", callback =>
        {
            _initilizeAction = false;
        });
    }

    public IEnumerator _RemoveKey(string key)
    {
        if (!Ready())
        {
            yield return new WaitForSeconds(0.5f);
        }

        _removeAction = true;

        JsonNetwork.GetInstance().PostServerCommand("remoteSettings/remove", key, callback =>
        {
            hashmap.Remove(key);
            _removeAction = false;
        });
    }

    public IEnumerator _Save()
    {
        if (!Ready())
        {
            yield return new WaitForSeconds(0.5f);
        }

        string postContent = "";

        foreach (string key in hashmap.Keys)
        {
            postContent += key + "&&";

            if (hashmap[key].GetType() == typeof(int))
            {
                postContent += "Int" + "&&";
            }
            else if (hashmap[key].GetType() == typeof(float))
            {
                postContent += "Float" + "&&";
            }
            else if (hashmap[key].GetType() == typeof(string))
            {
                postContent += "String" + "&&";
            }
            else if (hashmap[key].GetType() == typeof(bool))
            {
                postContent += "Bool" + "&&";
            }
            else
            {
                continue;
            }

            postContent += hashmap[key] + "%%";
        }


        if (postContent != "" && postContent.Length != 0)
        {
            _saveAction = true;
            JsonNetwork.GetInstance().PostServerCommand("remoteSettings/set", postContent, callback =>
            {
                RemoteSettings.ForceUpdate();
                RemoteSettings.Updated += () =>
                {
                    _saveAction = false;
                };
            });
        }
        else
        {
            _saveAction = true;
            RemoteSettings.ForceUpdate();
            RemoteSettings.Updated += () =>
            {
                _saveAction = false;
            };
        }
    }
    #endif
}