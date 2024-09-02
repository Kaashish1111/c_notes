// A matrix with 0 and 1 calculate the row that has maxiumum no of sum

#include <stdio.h>

int main() {
    int matrix[][10] = {
        {1, 0, 1, 0, 1},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {1, 1, 0, 1, 1}
    };

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int maxCount = 0;
    int maxRow = 0;

    // Iterate over each row
    for (int i = 0; i < rows; i++) {
        int count = 0;

        // Count the number of 1s in the current row
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) {
                count++;
            }
        }

        // Update the maximum count and row if the current row count is greater
        if (count > maxCount) {
            maxCount = count;
            maxRow = i;
        }
    }

    printf("The row with the maximum number of 1s is row %d with a count of %d.\n", maxRow + 1, maxCount);

    return 0;
}