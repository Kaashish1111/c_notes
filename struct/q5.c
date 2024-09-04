#include <stdio.h>

struct person{
    char name[50];
    int salary;
    int age;
};

int main() {
    struct person aman;
    struct person rahul;

    printf("Enter Aman's name: ");
    scanf("%49s", aman.name);

    printf("Enter Rahul's age: ");
    scanf("%d", &rahul.age);

    printf("Aman's name is: %s\n", aman.name);
    printf("Rahul's age is: %d\n", rahul.age);

    return 0;
}