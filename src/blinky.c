/**
 * Binky test
 */

//this file gives us the pinMode and digitalWrite defines that are part of the
//ardiuno compatibiltiy stuff. If we really wanted to, we could go totally
//hardcore and write our own.
#include <core_pins.h>
#include<HardwareSerial.h>
#include<usb_serial.h>

//this is found in our local include directory
#include "blinky.h"

int main()
{
    char i = 0;
    pinMode(13, OUTPUT);

    while(1)
    {
        delay(2000);
        i ^= 1;
        digitalWrite(13, i);
    }

    return 0;
}
