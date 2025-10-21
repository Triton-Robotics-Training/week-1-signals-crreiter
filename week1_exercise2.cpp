#include "mbed.h"
DigitalOut led(LED1);
AnalogIn potentiometer(p15);

int main() {
    while (true) {
        wait_ms(2000);
        led=1;
        wait_ms(potentiometer*2000);
        led=0;
    }
}
