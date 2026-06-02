#include<stdio.h>
int ReverseNumber(int num){
    int reversed = 0;
    while(num > 0){
        reversed = reversed * 10 + num % 10; 
        num /= 10; 
    }
    return reversed;
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    
    int result = ReverseNumber(number);
    printf("Reverse of %d is: %d\n", number, result);
    
    return 0;
}