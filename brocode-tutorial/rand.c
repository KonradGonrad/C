#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(0));

    int number_1 = (rand() % 6) + 1;
    int number_2 = (rand() % 6) + 1;

    printf("first throw: %d\n", number_1);
    printf("second thro: %d\n", number_2);

}