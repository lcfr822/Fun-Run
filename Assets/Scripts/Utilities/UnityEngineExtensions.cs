using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class UnityEngineExtensions
{
    /// <summary>
    /// Returns the component of Type T. If one doesn't already exist on the GameObject it will be added.
    /// </summary>
    /// <typeparam name="T">Type of Component to return.</typeparam>
    /// <param name="gameObject">The GameObject this Component is attached to.</param>
    /// <returns>Component</returns>
    static public T GetOrAddComponent<T>(this GameObject gameObject) where T : Component
    {
        return gameObject.GetComponent<T>() ?? gameObject.AddComponent<T>();
    }
}
