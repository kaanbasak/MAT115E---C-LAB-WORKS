#include <stdio.h>
#include <stdlib.h>

#define rows 5
#define columns 4

int canReachExit(int matrix[rows][columns]) {
    int i = 0, j = 0;
    while (i < rows && j < columns) {
        if (matrix[i][j] == 0) {
            return 0;  
        }
        if (i == rows - 1 && j == columns - 1) {
            return 1; 
        }
        if (matrix[i][j + 1] == 1) {
            j++;  
        } 
        else if (matrix[i + 1][j] == 1)
        {
            i++;
        }
        else
        return 0;
    }
    return 0;
}

int main() {
    int matrix[rows][columns] = {{1, 1, 0, 0}, {0, 1, 1, 1}, {0, 0, 0, 1}, {0, 0, 0, 1}, {0, 0, 0, 1}};
    int matrix2[rows][columns] = {{1, 1, 0, 0}, {0, 1, 0, 0}, {0, 1, 1, 1}, {0, 0, 0, 0}, {0, 0, 0, 1}};

    int result1 = canReachExit(matrix);
    int result2 = canReachExit(matrix2);

    printf("Matrix 1 result: %d\n", result1);  
    printf("Matrix 2 result: %d\n", result2);  

    return 0;
}