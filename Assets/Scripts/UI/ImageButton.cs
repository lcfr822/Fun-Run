using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class ImageButton : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    [SerializeField]
    private bool interactive = true;
    public Sprite depressedSprite, pressedSprite;
    public UnityEvent onPress, onDepress;

    public bool Interactive
    {
        get { return interactive; }
        set
        {
            interactive = value;
            if (interactive) { GetComponent<Image>().sprite = depressedSprite; }
            else { GetComponent<Image>().sprite = pressedSprite; }
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnPointerDown(PointerEventData pointerEventData)
    {
        if (interactive)
        {
            GetComponent<Image>().sprite = pressedSprite;
            onPress.Invoke();
        }
    }

    public void OnPointerUp(PointerEventData pointerEventData)
    {
        if (interactive)
        {
            GetComponent<Image>().sprite = depressedSprite;
            onDepress.Invoke();
        }
    }

    private void OnApplicationQuit()
    {
        onPress.RemoveAllListeners();
        onDepress.RemoveAllListeners();
    }

    private void OnValidate()
    {
        if(interactive && GetComponent<Image>().sprite != depressedSprite) { GetComponent<Image>().sprite = depressedSprite; }
        else if (!interactive && GetComponent<Image>().sprite != pressedSprite) { GetComponent<Image>().sprite = pressedSprite; }
    }
}
