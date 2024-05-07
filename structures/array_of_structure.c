#include <stdio.h>

struct student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct student s[3];

    for (int i = 0; i < 3; i++) {
        scanf("%19s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    printf("The data you entered is: \n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n%d\n%f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}