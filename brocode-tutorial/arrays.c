#include <stdio.h>
#include <string.h>

// Array - data structure that stores many values of the same data type

int main(){
    double prices[] = {5.0, 6.0, 7.5, 20.0, 21.5, 15.0, 12.5};
    printf("$%.2lf\n", prices[0]);

    double sales[5];
    sales[0] = 12.5;
    sales[1] = 6.0;
    sales[2] = 21.5;
    sales[3] = 15.0;

    printf("$%.2lf\n", sales[0]);


    printf("\nLoop through the array:\n");
    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    printf("\nCreating an 2-d array of numbers\n");

    int rows = 3;
    int cols = 3;
    int number = 1;
    int array[rows][cols];

    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = number;
            number += 1;
        }
    }

    printf("\nShowing the created 2-d array:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    
    printf("\nString array\n");

    char array_2[][10] = {"Ford", "Mercedes", "BMW"};

    // array_2[0] = "Tesla"
    strcpy(array_2[0], "Tesla");

    for (int i = 0; i < sizeof(array_2)/sizeof(array_2[0]); i++)
    {
        printf("%s\n", array_2[i]);
    }

    printf("\nSwap values of variables\n");

    char x[15] = "Lemonade";
    char y[15] = "Water";
    char temp[15];

    printf("cup_1 = %s, cup_2 = %s\n", x, y);

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("cup_1 = %s, cup_2 = %s\n", x, y);
    

    return 0;
}