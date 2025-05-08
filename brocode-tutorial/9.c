#include <stdio.h>
#include <math.h>

int main(){
    double A;
    double B;
    double C;

    printf("\nPlease provide the side of A: ");
    scanf("%lf", &A);
    printf("\nPlease provide the side of B: ");
    scanf("%lf", &B);

    C = sqrt(pow(A, 2) + pow(B, 2));
    printf("\nThe side of C is equal %.2lf\n", C);
}