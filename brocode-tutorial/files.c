#include <stdio.h>

int main(){
    // FILE *Fp = fopen("test.txt", "w");

    // fprintf(Fp, "Spongebob SquarePants");

    // fclose(Fp);

    if(remove("text.txt") == 0)
    {
        printf("Deleted");
    } else {
        printf("Not found");
    }
}