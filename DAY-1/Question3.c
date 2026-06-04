//Write a program to calculate the factorial of a given number.
#include<stdio.h>
int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n",num,factorial(num));
    return 0;
}
