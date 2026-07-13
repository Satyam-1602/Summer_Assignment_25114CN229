//Write a program to Check strong number. 
#include <stdio.h>
int isStrong(int num) {
    int original = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }
    return sum == original;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isStrong(num)) {
        printf("%d is a strong number.\n", num);
    } else {
        printf("%d is not a strong number.\n", num);
    }
    return 0;
}