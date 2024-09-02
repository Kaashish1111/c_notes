// transpose of a matrix
#include<stdio.h>

int main(){
    int row, col; // variables to store the number of rows and columns

    // Read the dimensions of the matrix from the user
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[row][col]; // declare a 2D array to store the matrix
    int transpose[col][row]; // declare a 2D array to store the transpose
    int answer[row][col]; // declare a 2D array to store the answer

    // Read the matrix elements from the user
    printf("Enter the matrix elements:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    // Find the transpose of the matrix
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    // Store the transpose into the answer matrix
    for(int i=0; i<col; i++){
        for(int j=0; j<row; j++){
            answer[j][i] = transpose[i][j];
        }
    }

    // Print the original matrix
    printf("Original Matrix:\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // new line for each row
    }

    // Print the answer matrix (which is the transpose of the original matrix)
    printf("Answer Matrix (Transpose of the Original Matrix):\n");
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            printf("%d ", answer[i][j]);
        }
        printf("\n"); // new line for each row
    }

    return 0; // return 0 to indicate successful execution
}