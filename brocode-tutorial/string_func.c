#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* strupr(char word[] ){
    size_t word_len = strlen(word);
    for(size_t i = 0; i < word_len; i++){
        word[i] = toupper((unsigned char)word[i]);
    }

    return word;
}

char* strlwr(char word[]){
    size_t word_len = strlen(word);
    for(size_t i = 0; i < word_len; i++){
        word[i] = tolower((unsigned char)word[i]);
    }

    return word;
}

char* strset(char word[], char c){
    size_t word_len = strlen(word);
    for(size_t i= 0; i < word_len; i++){
        word[i] = c;
    }

    return word;
}

int main(){

    char string_1[100] = "konrad";
    char string_2[] = "Gonrad";
    char string_3[] = "konrad";

    // printf("%s\n", strlwr(string_1)); // Wyswietla string_1 zapisany malymi literami
    // printf("%s\n", strupr(string_1)); // Wyswietla string_1 zapisany duzymi literami
    // strcat(string_1, string_2); // Dodaje do string_1 string_2 na koniec
    // strncat(string_1, string_2, 3); // Dodaje n elementow z string_2 do string_1 na koniec
    // strcpy(string_1, string_2); // Copy string_2 into string_1 
    // strncpy(string_1, string_2, 3); // Copy n letters from string_2 into string_1 -> Starting from the beggining
    // printf("%s\n", strset(string_1, '?')); // Sets all letters for c
    // printf("%s\n", string_1);

    int res_1 = strlen(string_1); // length of the string
    printf("%d\n", res_1);

    int res_2 = strcmp(string_1, string_3); // compares strings, 0 if are equal else 0> or <0
    printf("%d\n", res_2);

    int res_3 = strncmp(string_1, string_3, 3); // Compares n characters, 0 if are equal else >0 or <0
    printf("%d\n", res_3);
    

    return 0;
}