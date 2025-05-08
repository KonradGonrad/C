#include <stdio.h>
#include <stdbool.h>

int main(){
    char c = 'c';
    char word[] = "Example";

    int i = 15;
    float f = 3.14159265359;
    double df = 3.14159265359;

    bool statement = true;

    char z = -1;
    unsigned char x = 128;

    short int h = 32767;
    unsigned int j = 65535;

    int k = 2147483647;
    unsigned int l = 4294967295;

    printf("The character is an %s, and its equal to %c\n", word, c);
    printf("float pi: %0.11f\n", f);
    printf("double pi: %0.11lf\n", df);
    printf("Is the earth flat?\nAnswer: %d\n", statement);
    printf("%c%c\n", z, x);
    printf("short int ranges from -%d to %d, when unsinged short in ranges from 0 to %d\n", h, h, j);
    printf("int ranges from -%d to %d, when unsinged int ranges from 0 to %u. Also we need to use u to display it.\n", k, k, l);

}