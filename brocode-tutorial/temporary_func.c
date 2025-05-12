#include <stdio.h>

// deklarowanie temporary function
void hello(char name[], int age); // dzieki temu kompilator sprawdza, czy podalismy wszystkie funkcje wymagane w inpucie
// bez temporary function, kompilator nie bedzie znac bledu

int main(){
    char name[50];
    int age;

    printf("What's your name?\n");
    scanf("%s", name);

    printf("What's your age");
    scanf("%d", &age);

    hello(name, age);

    return 0;
}

void hello(char name[], int age){
    printf("Hello mr %s\nYou're %d years old\nNice to meet you", name, age);
}