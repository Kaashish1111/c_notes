#include <stdio.h>
struct student
{
    int roll;
    char name[20];
    float marks;
};
int main()
{
    struct student s1 = {1, "Kashish", 90.1};
    struct student s2 = {2, "Sunita", 99};
    printf("%f ", s1.marks);
    scanf("%f", &s1.marks);
    printf("%f ", s1.marks);
}