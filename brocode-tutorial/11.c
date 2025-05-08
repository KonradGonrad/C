#include <stdio.h>

int main(){
    int grade;
    printf("\nPlease provide the grade you've got?\n:");
    scanf("%d", &grade);

    switch (grade)
    {
    case 1:
        printf("You have to work up on this\n");
        break;
    case 2:
        printf("You have to work up on this also\n");
        break;
    case 3:
        printf("It's okey\n");
        break;
    case 4:
        printf("It's good!\n");
        break;
    case 5:
        printf("Very good!\n");
        break;
    case 6:
        printf("Excelent\n");
        break;
    default:
        printf("Please provide the int number in range 1-6.\n");
        break;
    }
}