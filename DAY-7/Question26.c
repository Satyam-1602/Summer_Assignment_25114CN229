//Write a program to Recursive Fibonacci.
#include <stdio.h>
int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Fibonacci is not defined for negative numbers.\n");
    } else {
        int result = fibonacci(number);
        printf("Fibonacci of %d is %d\n", number, result);
    }
    
    return 0;
}