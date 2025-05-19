#include <stdio.h>

void printage(int age)
{
    printf("You're %d years old.\n", age);
}

void printpage(int *age)
{
    printf("You're %d years old.\n", *age);
    
}

int main(){
    char a;
    char b;
    char s1[1];
    char s2 = 'c'; 

    printf("size of a: %lu\n", sizeof(a)); 
    printf("Adress of a: %p\n", &a);

    printf("size of a: %lu\n", sizeof(b)); 
    printf("Adress of a: %p\n", &b);

    printf("size of a: %lu\n", sizeof(s1)); 
    printf("Adress of a: %p\n", &s1);

    printf("size of a: %lu\n", sizeof(s2)); 
    printf("Adress of a: %p\n", &s2);


    // pointers

    int age = 30;
    int *pAge = NULL;
    pAge = &age;

    printf("Value of age: %d\n", age); 
    printf("Value of pAge: %d\n", *pAge); 

    printf("Address of age: %p\n", &age);
    printf("Address of pAge: %p\n", pAge);

    printf("Size of age: %lu\n", sizeof(age));
    printf("Size of pAge: %lu\n", sizeof(pAge));

    printage(age);
    printpage(pAge);
}