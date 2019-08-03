using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Singleton<T> : MonoBehaviour where T : MonoBehaviour
{
    private static bool m_ShuttingDown = false;
    private static object m_Lock = new object();
    private static T m_Instance;

    public static T Instance
    {
        get
        {
            if (m_ShuttingDown)
            {
                Debug.LogWarning("[Singleton] Instance'" + typeof(T) + "' already destroyed.");
                return null;
            }
            lock (m_Lock)
            {
                m_Instance = (T)FindObjectOfType(typeof(T));

                if (m_Instance == null)
                {
                    var singletonOject = new GameObject();
                    m_Instance = singletonOject.GetOrAddComponent<T>();
                    singletonOject.name = typeof(T).ToString() + " (Singleton)";
                    //DontDestroyOnLoad(singletonOject);
                }

                return m_Instance;
            }
        }
    }

    private void OnApplicationQuit()
    {
        m_ShuttingDown = true;
    }

    private void OnDestroy()
    {
        m_ShuttingDown = true;
    }
}
