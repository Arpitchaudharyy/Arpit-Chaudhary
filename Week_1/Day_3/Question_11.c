// Write a program to Find GCD of two numbers
#include <stdio.h>
int main() {
    int n1,n2,remainder;
    printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    while(n2!=0) {
        remainder=n1%n2;
        n1=n2;
        n2= remainder;
    }
    printf("greatest common factor=%d",n1);
    return 0;
}