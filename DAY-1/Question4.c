//Write a program to count the number of digits in a given number.
#include<stdio.h>
int countDigits(int num){
    int count=0;
    while(num!=0){
        num=num/10;
        count++;
    }
    return count;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Number of digits in %d is %d\n",num,countDigits(num));
    return 0;
}