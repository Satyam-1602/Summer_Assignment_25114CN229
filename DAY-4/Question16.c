//Write a program to Print Armstrong numbers in a given range.
#include <stdio.h>
#include <math.h>
int isArmstrong(int num) {
    int originalNum = num, remainder, result = 0;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, 3);
        originalNum /= 10;
    }
    return result == num;
}
int main() {
    int start, end, i;
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Armstrong numbers in the range %d to %d are: ", start, end);
    for (i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}