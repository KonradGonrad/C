#include <stdio.h>

int main(){
    char name[] = "John";
    char surename[] = "Smith";
    float price = 9.99;
    char item[] = "Coca-cola";
    char grade = 'F';
    int digit = 2;
    const float PI = 3.14159;

    printf("Hello $%-2s $%s\n", name, surename);
    printf("The price of the $%-1s is $%.2f\n", item, price);
    printf("From the last test, which was the %ind test, you've got $%c\n",digit, grade);
    printf("The value of pi is equal to $%.4f\n", PI);
}