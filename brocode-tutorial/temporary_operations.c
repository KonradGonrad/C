#include <stdio.h>

// the shortcut has a given formula: (condition) ? value if true : value if false

int MaxNum(int x, int y){
    // if (x > y){
    //     return x;
    // } else {
    //     return y;
    // }

    // From upper if statement we can just do something like:
    return (x > y) ? x : y;
}

int main(){

    int a  = 3;
    int b = 4;

    int max = MaxNum(a, b);
    printf("\nThe result of comparing %d and %d is %d, which means it's greater than the other one\n", a, b, max);
}