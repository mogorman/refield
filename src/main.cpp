#include "mbed.h"

DigitalOut myled(P0_19);

int main()
{
    while(1) {
        myled = 1;
        wait(1.2);
        myled = 0;
        wait(1.2);
    }
}
