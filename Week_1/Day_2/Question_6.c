// Write a program to Reverse a number
#include<stdio.h>
int main(){
    int n,s,rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    while (n>0)
    {
       s = n % 10;
       n = n / 10;
       rev = rev*10 + s;
    }
    printf("reverse of the number is= %d\n",rev);
    return 0;
}