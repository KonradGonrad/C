#include <stdio.h>

    // continue - skips to another loop, iteration
    // break - exits a loop/switch

int main(){
    for (int i = 1; i<= 20; i++)
    {
        if (i % 2 == 0){
            continue;
        } else if(i == 15) {
            break;
        }
        printf("%d\n", i);
    }
}