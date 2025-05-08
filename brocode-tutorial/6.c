#include <stdio.h>
#include <string.h>

int main(){
    // Shortcuts for writing operations:
    char name[25];
    int age;
    char city[25];

    printf("\nHello, what's your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    printf("\nHi, Mr. %s. How old are you?\n", name);
    scanf("%i", &age);

    printf("\nNice to meet you %s. You're %d years old. Where do you live?\n", name, age);
    scanf("%24s", city);

    printf("\nOh %s is a very nice city...\n", city);
}