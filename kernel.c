#include "io.h"

// Uses Broadcom chip BCM2711
// https://datasheets.raspberrypi.com/bcm2711/bcm2711-peripherals.pdf
void main()
{
    uart_init();
    uart_writeText("Hello world!\n");
    while (1);
}
