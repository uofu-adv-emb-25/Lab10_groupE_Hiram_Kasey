#pragma GCC optimize ("O0")

#include <stdio.h>
#include <pico/stdlib.h>
#include <pico/sync.h>


int main(void)
{
    while(1)
    {
        uint32_t k;
        int i = 0;
        for (i = 0; i < 30; i ++) 
        {
            uint32_t j = 0;
            j = ((~j >> i) + 1) * 27644437;
            k = j;
        }
    }    
}