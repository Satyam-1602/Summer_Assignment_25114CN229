#include<stdio.h>
int ProductOfDigits(int num){
    int product = 1;
    while(num > 0){
        product *= num % 10; 
        num /= 10; 
    }
    return product;
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = ProductOfDigits(number);
    printf("Product of digits of %d is: %d\n", number, result);
    
    return 0;
}