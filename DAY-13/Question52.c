//Write a program to Count even and odd elements in an array.
#include <stdio.h>
int main() {
    int arr[10], i;
    int evenCount = 0, oddCount = 0;
    printf("Enter 10 elements of the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Number of even elements in the array: %d\n", evenCount);
    printf("Number of odd elements in the array: %d\n", oddCount);
    return 0;
}