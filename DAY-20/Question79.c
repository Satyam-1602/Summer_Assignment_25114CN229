//Write a program to Find row-wise sum. 
#include <stdio.h>
void row_wise_sum(int matrix[10][10], int rows, int cols, int sum[10]) {
    for (int i = 0; i < rows; i++) {
        sum[i] = 0;
        for (int j = 0; j < cols; j++) {
            sum[i] += matrix[i][j];
        }
    }
}
int main() {
    int matrix[10][10];
    int sum[10];
    int rows, cols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    row_wise_sum(matrix, rows, cols, sum);

    printf("Row-wise sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d: %d\n", i + 1, sum[i]);
    }

    return 0;
}