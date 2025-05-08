#include <stdio.h>

int main(){
    // "+" addition
    // "-" substraction
    // "/" division
    // "*" multiplication
    // "%" modulus
    // "++" increment
    // "--" decrement

    int a = 10;
    int b = 4;

    float result1 = a + b;
    int result2 = a - b;
    float result3 = a / b;
    float result4 = a / (float) b;
    int result5 = a * b;
    float result6 = a % b;
    int c = a;
    int d = b;
    c++;
    d--;
    printf("In case of our variables a: $%i and $%i, we can provide some calculations:\n", a, b);
    printf(" - Addition: $%i + $%i = $%.0f\n", a, b, result1);
    printf(" - Substraction: $%i - $%i = $%i\n", a, b, result2);
    printf(" - Division: $%i / $%i = $%.2f  or  $%.2f \nResult in division depends on our approach, if we transform denominator to float or not.\n", a, b, result3, result4);
    printf(" - Multiplication: $%i * $%i = $%i\n", a, b, result5);
    printf(" - Modulo: $%i mod $%i = $%.2f\n", a, b, result6);
    printf(" - Incrementation: $%i -> $%i\n", a, c);
    printf(" - Decremantation: $%i -> $%i\n", b, d);
}