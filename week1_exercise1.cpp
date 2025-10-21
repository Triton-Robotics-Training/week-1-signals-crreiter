#include "mbed.h"
DigitalOut led(LED1);
DigitalIn button(BUTTON1);

int main() {
    while (true) {
        if ( button== 1) {
         led = 1;
      }
      else  {
            led = 0;
     }
        wait_ms(50);
    }
}
