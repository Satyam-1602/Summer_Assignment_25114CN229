//Write a program to Check symmetric matrix. 
#include <stdio.h>
int is_symmetric(int matrix[10][10], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0; 
            }
        }
    }
    return 1; 
}
int main() {
    int matrix[10][10];
    int size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (is_symmetric(matrix, size)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}