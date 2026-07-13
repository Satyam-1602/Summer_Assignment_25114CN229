//Write a program to Frequency of an element.
#include <stdio.h>
int frequency(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    return count;
}
int main() {
    int arr[] = {10, 20, 30, 40, 50, 30, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int result = frequency(arr, n, key);
    printf("Frequency of %d is %d\n", key, result);
    return 0;
}