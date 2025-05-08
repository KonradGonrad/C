#include <stdio.h>
#include <math.h>

int main(){
    int a = 7;
    int b = 3;
    double c = -35;
    double A = sqrt(a); // square root
    double B = pow(a, b);
    int C = round(A);
    int D = ceil(A);
    int E = floor(A);
    double F = sin(A);
    double G = cos(A);
    double H = tan(A);
    double I = fabs(c);

    printf("Square root of %d is equal to %.2lf\n", a, A);
    printf("%d to the power of %d is eqaul to %.2lf\n", a, b, B);
    printf("Rounded %lf is equal to %d\n", A, C);
    printf("Rounded up %lf is equal to %d\n", A, D);
    printf("Rounded down %lf is equal to %d\n", A, E);
    printf("Sinus of the %lf is equal to %lf\n", A, F);
    printf("Cosinus of the %lf is equal to %lf\n", A, G);
    printf("Tangent of the %lf is equal to %lf\n", A, H);
    printf("Absolute value of %.2f is equal to %.2f\n",c, I );
}