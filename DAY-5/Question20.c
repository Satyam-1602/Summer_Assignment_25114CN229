//Write a program to Find largest prime factor. 
#include <stdio.h>
int isPrime(int n) {
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int largestPrimeFactor = -1;
    for (int i = 2; i <= num; i++) {
        if (num % i == 0 && isPrime(i)) {
            largestPrimeFactor = i;
        }
    }
    if (largestPrimeFactor != -1) {
        printf("Largest prime factor of %d is %d.\n", num, largestPrimeFactor);
    } else {
        printf("No prime factor found for %d.\n", num);
    }
    return 0;
}