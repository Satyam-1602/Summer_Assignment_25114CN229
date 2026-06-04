//Write a program to calculate the sum of first N natural numbers.
#include<stdio.h>
int SumOfNaturalNumbers(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    int result=SumOfNaturalNumbers(n);
    printf("The sum of first %d natural numbers is: %d\n",n,result);
    return 0;
}
