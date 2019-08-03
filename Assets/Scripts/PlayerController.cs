﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

[RequireComponent(typeof(BoxCollider2D))]
[RequireComponent(typeof(Rigidbody2D))]
public class PlayerController : Singleton<PlayerController>
{
    private bool clearing = false;
    private bool canJump = true;
    private Coroutine jumpClearRoutine;
    private Rigidbody2D rb2d;

    public bool poweringJump = false;
    public Image powerbarImage;
    public ImageButton jumpButton;

    protected PlayerController() { }

    // Start is called before the first frame update
    void Start()
    {
        rb2d = GetComponent<Rigidbody2D>();
        rb2d.constraints = RigidbodyConstraints2D.FreezeRotation;
        powerbarImage.fillAmount = 0.0f;
    }

    // Update is called once per frame
    void Update()
    {
        if (GameController.Instance.gameRunning)
        {
            if (GetComponent<BoxCollider2D>().GetContacts(new Collider2D[] { GetComponent<BoxCollider2D>() }) == 0)
            {
                canJump = false;
                jumpButton.Interactive = false;
            }
            else if (GetComponent<BoxCollider2D>().GetContacts(new Collider2D[] { GetComponent<BoxCollider2D>() }) > 0 && powerbarImage.fillAmount > 0.0f)
            {
                canJump = true;
                jumpButton.Interactive = true;
                StartCoroutine(ClearJumpPowerBar());
            }
            else if (GetComponent<BoxCollider2D>().GetContacts(new Collider2D[] { GetComponent<BoxCollider2D>() }) > 0 && powerbarImage.fillAmount == 0.0f)
            {
                canJump = true;
                jumpButton.Interactive = true;
            }
            if (GetComponent<Animator>().speed < 1) { GetComponent<Animator>().speed = 1; }
        }
        else if (!GameController.Instance.gameRunning && GetComponent<Animator>().speed > 0)
        {
            GetComponent<Animator>().speed = 0;
        }
    }

    public void BeginJump()
    {
        poweringJump = true;
        StartCoroutine(IncreaseJumpForce());
    }

    public void EndJump()
    {
        poweringJump = false;
    }

    public IEnumerator IncreaseJumpForce()
    {
        if (canJump)
        {
            float maxHold = 2.0f;
            float currentHold = 0.0f;
            Vector2 jump = Vector2.zero;

            canJump = false;

            while (poweringJump && currentHold < maxHold)
            {
                currentHold += Time.deltaTime;
                jump = Vector2.up * ((currentHold * 5.0f) + 5);
                powerbarImage.fillAmount = ((currentHold * 5.0f) + 5).Map(5, 15, 0, 1);
                if (!poweringJump)
                {
                    break;
                }
                yield return null;
            }
            rb2d.AddForce(jump, ForceMode2D.Impulse);
        }
    }

    private IEnumerator ClearJumpPowerBar()
    {
        if (!clearing)
        {
            clearing = true;

            while (powerbarImage.fillAmount > 0.0f)
            {
                powerbarImage.fillAmount -= 0.01f;
                yield return null;
            }
            clearing = false;
        }
    }
}