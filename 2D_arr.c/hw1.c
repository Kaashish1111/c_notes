//  sum of  two matrix without using extra matrix
#include<stdio.h>
int main(){
    int matrix1[2][2] = {{1, 2}, {3, 4}};
    int matrix2[2][2] = {{5, 6}, {7, 8}};
    // Add matrix2 to matrix1
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            matrix1[i][j] += matrix2[i][j];
        }
    }

    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
}
}
