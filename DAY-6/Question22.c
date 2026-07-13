//Write a program to Convert binary to decimal.
#include <stdio.h>
int binaryToDecimal(int n) {
    int decimalNumber = 0;
    int base = 1; 
    
    while (n > 0) {
        int lastDigit = n % 10;
        decimalNumber += lastDigit * base;
        base *= 2; 
        n = n / 10;
    }
    
    return decimalNumber;
}
int main() {
    int binaryNumber;
    
    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);
    
    int decimalNumber = binaryToDecimal(binaryNumber);
    printf("Decimal representation: %d\n", decimalNumber);
    
    return 0;
}