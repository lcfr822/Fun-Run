using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class ExtensionMethods
{
    /// <summary>
    /// Map a number from one number range to another.
    /// </summary>
    /// <param name="value">Number from range A to map onto range B.</param>
    /// <param name="from1">Minimum value of range A.</param>
    /// <param name="to1">Maximum value of range A.</param>
    /// <param name="from2">Minimum value of range B.</param>
    /// <param name="to2">Maximum value of range B.</param>
    /// <returns>Mapped value.</returns>
    public static float Map(this float value, float from1, float to1, float from2, float to2)
    {
        return (value - from1) / (to1 - from1) * (to2 - from2) + from2;
    }
}
