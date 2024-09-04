#include <stdio.h>

typedef struct cricketers{
    char name[50];
    int age;
    int testMatches;
    int averageRuns;
} cricketers;

int main() {
    cricketers arr[20];

    for(int i = 0; i < 20; i++) {
        printf("Enter details for cricketer %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]s", arr[i].name); // Using %[^\n] to capture the whole name including spaces

        printf("Age: ");
        scanf("%d", &arr[i].age);

        printf("Number of Test Matches: ");
        scanf("%d", &arr[i].testMatches);

        printf("Average Runs: ");
        scanf("%d", &arr[i].averageRuns);
    }

    return 0;
}
