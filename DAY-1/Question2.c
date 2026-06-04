//Write a program to print the multiplication table of a given number.
#include<stdio.h>
int table(int num){
    for(int i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    table(num);
    return 0;
}