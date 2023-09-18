#include <stdio.h>
#include "pico/stdlib.h"

int main() {
    // To use USB
    stdio_init_all();

    // To use GPIO 25pin
    gpio_init(25);
    gpio_set_dir(25, GPIO_OUT);

    // Loop
    while (true) {
        printf("Hello, world!\n");

        gpio_put(25, 1);
        sleep_ms(250);
        gpio_put(25, 0);
        sleep_ms(250);
    }
}