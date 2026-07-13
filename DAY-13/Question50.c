//Write a program to Find sum and average of array elements.
#include <stdio.h>
int main() {
    int arr[10], i;
    int sum = 0;
    float average;
    printf("Enter 10 elements of the array:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = (float)sum / 10;
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);
    return 0;
}