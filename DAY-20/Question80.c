//Write a program to Find column-wise sum. 
#include <stdio.h>
void column_wise_sum(int matrix[10][10], int rows, int cols, int sum[10]) {
    for (int j = 0; j < cols; j++) {
        sum[j] = 0;
        for (int i = 0; i < rows; i++) {
            sum[j] += matrix[i][j];
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

    column_wise_sum(matrix, rows, cols, sum);

    printf("Column-wise sums:\n");
    for (int j = 0; j < cols; j++) {
        printf("Sum of column %d: %d\n", j + 1, sum[j]);
    }

    return 0;
}