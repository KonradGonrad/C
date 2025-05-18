#include <stdio.h>
#include <string.h>

int main(){

    // for loop repeats the code inside exact amount of times
    for (int i = 1; i <= 10; i+= 3){
        printf("%d\n", i);
    }
    
    // while - repeats the code if statement is True unlimited amout of time, first check the condition then do the code

    char name[25];
    
    while (strlen(name) == 0)
    {
        printf("\nPlease provide your name\n: ");
        fgets(name, 25, stdin);

        name[strlen(name) - 1] = '\0';
    }

    printf("\nHello mr. %s\n", name);

    // do while - first executes the code then check the statement
    int number;
    int sum;
    
    do {
        printf("\nPlease provide the number, that you want to add\n:");
        scanf("%d", &number);

        sum += number;
    } while(number > 0);

    printf("Sum: %d\n", sum);

    // nested loop - loop inside another loop

    int rows;
    int cols;
    char symbol;

    printf("\nPlease provide number of rows: ");
    scanf("%d", &rows);

    printf("Please provide number of cols: ");
    scanf("%d", &cols);

    printf("Please provide the symbol: ");
    scanf(" %c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= cols; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }


    return 0;
}