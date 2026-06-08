// Write a program to Convert decimal to binary

#include<stdio.h>
int main()
{
    int a[100] , n , j , i=0;

    printf("Enter the decimal number\n");
    scanf("%d",&n);

    printf("In binary the %d are\n",n);

    if (n==0)
    {
        printf("0");
    }
    
    while (n>0)
    {
        a[i] = n%2;
        n = n / 2;
        i++;
    }
    for ( j = i-1; j >= 0; j--)
    {
        printf("%d ",a[j]);
    }
    
    return 0;

}