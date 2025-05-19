#include <stdio.h>
#include <string.h>

// typedef - shortcut to creating datatype objects like char[x] or structs

typedef struct
{
    char name[25];
    float gpa;
    char school[50];
} Student;

typedef struct 
{
    char name[15];
    char password[15];
    int pin;
} User;


struct Person
{
    char first_name[15];
    char sure_name[15];
    int age;
};


int main(){
    struct Person p1;
    strcpy(p1.first_name, "Konrad");
    strcpy(p1.sure_name, "Gonrad");
    p1.age = 30;

    struct Person p2;
    strcpy(p2.first_name, "Celine");
    strcpy(p2.sure_name, "Di-jhon");
    p2.age = 57;

    printf("Hello %s %s, so you're %d years old\n", p1.first_name, p1.sure_name, p1.age);
    printf("Hello %s %s, so you're %d years old\n", p2.first_name, p2.sure_name, p2.age);

    printf("\n");

    User u1 = {"Zabijak131", "Haslo123", 5721};
    printf("%s -> %s\n", u1.name, u1.password);
    printf("Your pin is\n %d", u1.pin);

    User u2 = {"Kosiarz33", "MNFJ2313", 3003};
    printf("%s -> %s\n", u2.name, u2.password);
    printf("Your pin is\n %d", u2.pin); 

    printf("\n");

    Student student1 = {"Spongebob", 3.0, "Bikini's bottom university"};
    Student student2 = {"Patrick", 2.0, "Bikini's bottom university"};
    Student student3 = {"Sandy", 4.5, "Bikini's bottom university of technology"};
    Student students[] = {student1, student2, student3};

    for(int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%-12s\t -> %.2f gpa on %s\n", students[i].name, students[i].gpa, students[i].school);
    }
}