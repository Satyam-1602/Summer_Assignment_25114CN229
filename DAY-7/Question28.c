//Write a program to Recursive reverse number.
#include <stdio.h>

int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev; 
    }
    rev = rev * 10 + (n % 10);
    return reverseNumber(n / 10, rev);
}
int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Reverse number is not defined for negative numbers.\n");
    } else {
        int result = reverseNumber(number, 0);
        printf("Reverse of %d is %d\n", number, result);
    }
    
    return 0;
}