// Write a program to Write function to check prime.
#include<stdio.h>
int prime (int n){
    int p ;
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
int main (){
    int n;
    printf("enter the numbere n = ");
    scanf("%d",&n);
    printf(" %d ", prime(n));
    return 0;

}