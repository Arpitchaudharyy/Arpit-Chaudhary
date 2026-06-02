// Write a program to Find sum of digits of a number.
#include<stdio.h>
int main(){
    int n,s,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    while (n>0)
    {
        s = n % 10;
        n = n / 10;
        sum = sum + s;
    }
    printf("sum of digit is = %d\n", sum);
    return 0;
    
}