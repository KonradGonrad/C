#include <stdio.h>
#include <math.h>

int main(){
    const double PI = 3.14159;

    double r;
    double area;
    double circumference;

    printf("\nPlease, provide the radius: ");
    scanf("%lf", &r);

    area = 2 * PI * r;
    circumference = PI * pow(r, 2);
    printf("Area: %lf\n", area);
    printf("Circumference: %lf\n", circumference);
}