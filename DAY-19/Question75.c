//Write a program to Transpose matrix. 
#include <stdio.h>
int transposeMatrix(int a[10][10], int t[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = a[i][j];
        }
    }
    return 0;
}
int main() {
    int a[10][10], t[10][10];
    int m, n;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    transposeMatrix(a, t, m, n);
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
    return 0;
}