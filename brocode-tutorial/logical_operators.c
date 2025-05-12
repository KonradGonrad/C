#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <ctype.h>

int main(){
    // && = and operator
    // || = or operator
    // ! = not

    double temperature;
    char sunny;
    bool sunny_b;

    printf("What's the temperature?\n");
    scanf("%lf", &temperature);

    printf("Is it sunny outside? Please provide (T) - True or (F) - False\n");
    scanf(" %c", &sunny);
    sunny = toupper(sunny);


    if (sunny == 'T'){
        sunny_b = true;
    } else if(sunny == 'F') {
        sunny_b = false;
    } else {
        printf("[Error]: You've provided wrong input");
    }

    if (temperature > 0 && temperature <= 30 && sunny_b){
        printf("The weather's good\n");
    } else if((temperature > 0 && temperature <= 30) || sunny_b){
        printf("The weather's OK!\n");
    } else {
        printf("The weather isn't good\n");
    }

    if (! sunny_b){ // Not operator
        printf("It's not sunny\n");
    } else {
        printf("it's sunny\n");
    }

    // printf("%i\n", sunny_b); // Checking if the bool works
    
}