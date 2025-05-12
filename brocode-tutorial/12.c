#include <stdio.h>
#include <ctype.h>

int main(){
    char unit;
    float temperature;

    

    printf("Please provide the unit, which you'll be using. For Celcius provide C and for fahrenheiths provide F\n");
    scanf("%c", &unit);
    unit = toupper(unit);
    // printf("%c\n", unit);

    if(unit == 'C'){
        printf("Provide the temperature that you want to convert into Fahrenheits:\n");
        scanf("%f", &temperature);

        temperature = temperature * 9/5 + 32;
        printf("\nThe converted temperature is equal to %.2f\n", temperature);
        
    } else if (unit == 'F')
    {
        printf("Provide the temperature that you want to convert into Celcius:\n");
        scanf("%f", &temperature);

        temperature = (temperature - 32) * 5/9 ;
        printf("\nThe converted temperature is equal to %.2f\n", temperature);
        
    } else {
        printf("Error, you provided wrong unit specifier");
    }

    return 0;
}