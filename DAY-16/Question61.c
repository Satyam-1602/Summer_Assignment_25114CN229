//Write a program to Find missing number in array.
#include <stdio.h>
int main() {
    int n, i, sum = 0, total_sum;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter %d numbers (from 1 to %d with one missing): ", n-1, n);
    for(i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    total_sum = n * (n + 1) / 2; 
    int missing_number = total_sum - sum;
    printf("The missing number is: %d\n", missing_number);
    return 0;
}