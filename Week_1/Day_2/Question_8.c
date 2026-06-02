// Write a program to Check whether a number is palindrome
#include<stdio.h>
int main(){
    int n,s,org,rev=0;
    printf("enter the number:");
    scanf("%d",&n);
    org = n;
    while (n>0)
    {
       s = n % 10;
       n = n / 10;
       rev = rev*10 + s;
    }
    if (rev==org)
    {
        printf("Number is palindrome");
    }
    else 
        {
            printf("number is not palindrome");
        }
        return 0;
    
}