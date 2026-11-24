#include "grains.h"
uint64_t square(uint8_t index){
    // 2 ** (n-1)
    return (64 >= index && index > 0) ? 1ul << (index - 1): 0 ;
}
uint64_t total(void){
    // square(64) square(63) 
    // Index: 1 2 3 4 5
    // Grain: 1 2 4 8 16
    // Total: 1 3 7 15 31 
    /* uint64_t total = 0;
    for(uint8_t i = 64; i > 0; i--){
        total += square(i);
    }
    return total;
    */
    return (((uint64_t)1 << 63) - 1) + ((uint64_t)1 << 63);
}