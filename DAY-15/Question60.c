//Write a program to Move zeroes to end. 
#include <stdio.h>
int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }
    while (count < n) {
        arr[count] = 0;
        count++;
    }
    printf("\nArray after moving zeroes to the end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}