#include<stdio.h>
#include <stdio.h>

int main() {
    int roll_no, marks;
    printf("Enter roll no: ");
    scanf("%d", &roll_no);
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Declare a 2D array with variable length
    int students[roll_no][marks];

    // Use the 2D array
    for (int i = 0; i < roll_no; i++) {
        for (int j = 0; j < marks; j++) {
            printf("Enter marks for roll no %d, subject %d: ", i + 1, j + 1);
            scanf("%d", &students[i][j]);
        }
    }

    // Print the 2D array
    for (int i = 0; i < roll_no; i++) {
        for (int j = 0; j < marks; j++) {
            printf("%d ", students[i][j]);
        }
        printf("\n");
    }

    return 0;
}