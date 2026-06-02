#include<stdio.h>
int Palindrome(int num){
    int original = num;
    int reversed = 0;
    
    while(num > 0){
        reversed = reversed * 10 + num % 10; 
        num /= 10; 
    }
    
    return original == reversed; 
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if(Palindrome(number)){
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }
    
    return 0;
}