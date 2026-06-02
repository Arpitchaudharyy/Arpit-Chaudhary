// Write a program to Find product of digits
#include<stdio.h>
int main(){
    int n,s,pro=1;
    printf("enter the number:");
    scanf("%d",&n);
    while (n>0)
    {
        s = n % 10;
        n = n / 10;
        pro = pro*s;
    }
    printf("product of digit is = %d\n", pro);
    return 0;
}