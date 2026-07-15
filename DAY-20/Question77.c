//Write a program to Multiply matrices. 
#include <stdio.h>
int multiply_matrices(int a[10][10], int b[10][10], int c[10][10], int m, int n, int p) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return 0;
}
int main() {
    int a[10][10], b[10][10], c[10][10];
    int m, n, p;

    printf("Enter the number of rows and columns for the first matrix (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the number of columns for the second matrix (p): ");
    scanf("%d", &p);

    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    multiply_matrices(a, b, c, m, n, p);

    printf("Result of multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}