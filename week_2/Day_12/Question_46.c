//WAP to write a function to check armstrong number
#include <stdio.h>
#include <math.h>
int main() {
    int n;
    void armstrong(int);
    printf("enter the number\n");
    scanf("%d",&n);
    armstrong(n);
    return 0;
}
void armstrong(int n){
    int r,n1,n2,d=0,arm=0;
    n1=n2=n;
    while(n1>0){
        d++;
        n1=n1/10;
    }
    while(n2>0){
        r=n2%10;
        arm=arm+pow(r,d);
        n2=n2/10;
    }
    if(n==arm){
        printf("yes it is armstrong number");
    } else {
        printf("no the number is not armstrong");
    }
}