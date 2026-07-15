//Write a program to Find diagonal sum. 
#include <stdio.h>
int diagonalSum(int a[10][10], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += a[i][i]; 
        if (i != n - 1 - i) { 
            sum += a[i][n - 1 - i]; 
        }
    }
    return sum;
}
int main() {
    int a[10][10];
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int sum = diagonalSum(a, m, n);
    printf("Sum of the diagonals: %d\n", sum);
    return 0;
}