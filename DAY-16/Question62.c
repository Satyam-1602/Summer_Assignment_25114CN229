//Write a program to Find maximum frequency element in array.
#include <stdio.h>
int main() {
    int n, i, j, max_freq = 0, freq;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        freq = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                freq++;
            }
        }
        if(freq > max_freq) {
            max_freq = freq;
        }
    }
    printf("The maximum frequency is: %d\n", max_freq);
    return 0;
}