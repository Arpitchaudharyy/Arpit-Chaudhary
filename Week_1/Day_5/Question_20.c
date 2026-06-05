//WAP to find the largest prime factor
#include <stdio.h>
int main() {
    int n,i,m;
    printf("enter the number\n");
    scanf("%d",&n);
    if(n<2){
        printf("numbers less thsn 2 do not have prime numbers\n");
    }
    while(n%2==0){
        m=2;
        n=n/2;
    }
    for(i=3;i*i<=n;i+=2){
        while(n%i==0){
            m=i;
            n=n/i;
        }
    }
    if(n>2){
        m=n;
    }
    printf("the largest prime factor is %d\n",m);
    return 0;
}