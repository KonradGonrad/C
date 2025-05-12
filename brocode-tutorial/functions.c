#include <stdio.h>

void hello(char name[], int age){
    printf("Hello mr %s\n", name);
    printf("You're %d years old\n", age);
    printf("Nice to meet you!");
}

double square(){
    double x;

    printf("\nPlease provide the number you want to square:\n");
    scanf("%lf", &x);

    return x * x;
}

int main(){
    char name[25];
    int age;

    printf("Please provide your name:\n");
    scanf("%s", name);

    printf("What's your age?\n");
    scanf("%d", &age);

    hello(name, age);

    double result = square();
    printf("The result: %.2lf\n", result);

    return 0;

}