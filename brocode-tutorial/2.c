#include <stdio.h>

int main(){
    /* Creating variables with their types*/
    char name[] = "Jack";
    int age = 21;
    float height = 183.5;
    char surename = 'J';

    printf("Hello %s %c.\n", name, surename);
    printf("You\'re %d years old and %f cm height\n", age, height);

    return 0;
}