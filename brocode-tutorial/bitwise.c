#include <stdio.h>

// & - AND
// | - OR
// ^ - XOR
// << - SHIFT LEFT
// >> - SHIFT RIGHT

int main(){
    int x = 5; //  00000101
    int y = 10; // 00001010
    int z = 0;

    printf("x: %d, y: %d\n", x, y);

    z = x & y;
    printf("AND %d\n", z); // 00000000 

    z = x | y;
    printf("OR %d\n", z); // 00001111

    z = x ^ y;
    printf("AND %d\n", z); // 00001111

    z = x << 1;
    printf("SHIFT LEFT x %d\n", z); // 00001010

    z = y >> 1;
    printf("SHIFT RIGHT y %d\n", z); // 00000101

    return 0;
}