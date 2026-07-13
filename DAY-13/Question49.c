//Write a program to Input and display array. 
#include <stdio.h>
int main() {
    int arr[10], i;
    printf("Enter 10 elements of the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("The elements of the array are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}