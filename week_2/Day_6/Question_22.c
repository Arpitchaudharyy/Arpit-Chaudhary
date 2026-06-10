// Write a program to Convert binary to decimal.

#include<stdio.h>
#include<math.h>
int main(){
    int a , n , b=0 , i=0 ;
    printf("enter the binary number\n");
    scanf("%d",&n);
    while(n>0)
    {
        a = n%10;
        b = b + a*pow(2,i);
        n=n/10;
        i++;
    }
    printf("The decimal for the binary is\n");
    printf("%d",b);
    return 0; 
}