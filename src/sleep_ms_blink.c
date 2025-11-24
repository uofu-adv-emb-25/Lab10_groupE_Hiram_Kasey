#include <stdio.h>

#include "FreeRTOS.h"
#include "task.h"


#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "pico/cyw43_arch.h"

bool on = 0;
int main(int argc, char const *argv[])
{
    stdio_init_all();
    hard_assert(cyw43_arch_init() == PICO_OK);
    while(1)
    {
        gpio_put(0, on);
        sleep_ms(500);
        on = ~ on;
    }
    return 0;
}
