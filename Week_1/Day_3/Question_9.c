// Write a program to Check whether a number is prime.
#include<stdio.h>
int main(){
    int n,p=0;
    printf("enter the number:");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p = 1;
     
        } 
    }
    if (p==1)
    {
        printf("%d is not a prime number\n",n);
    }
    else if (n>=2)
    {
        printf("%d is a prime number\n",n);
    }
    else
    {
        printf("Enter a number greater than or equal to 2\n");
    }
    return 0;
}