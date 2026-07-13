//Write a program to Find largest and smallest element in an array.
#include <stdio.h>
int main() {
    int arr[10], i;
    int largest, smallest;
    printf("Enter 10 elements of the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    printf("Largest element in the array: %d\n", largest);
    printf("Smallest element in the array: %d\n", smallest);
    return 0;
}