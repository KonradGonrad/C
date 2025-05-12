#include <stdio.h>
#include <math.h>

int main(){
    char operator;
    double a;
    double b;
    double result;

    printf("Please provide what operation you want to use, in equation ( +, -, /, *):\n");
    scanf("%c", &operator);

    printf("\nPlease now provide the first (a) value in equation ( a operator b):\n");
    scanf("%lf", &a);

    printf("\nPlease now provide the second (b) value in equation ( a operator b):\n");
    scanf("%lf", &b);

    switch (operator)
    {
    case '+':
        result = a + b;
        printf("\nresult: %.2lf\n", result);
        break;
    case '-':
        result = a - b;
        printf("\nresult: %.2lf\n", result);
        break;
    case '/':
        result = a / b;
        printf("\nresult: %.2lf\n", result);
        break;
    case '*':
        result = a * b;
        printf("\nresult: %.2lf\n", result);
        break;
    default:
        printf("Wrong operator");
        break;
    }
}