//WAP to find whether a number is strong number or not
#include <stdio.h>
int main() {
    int n,n1,i,r,c=0,f;
    printf("enter the number\n");
    scanf("%d",&n);
    n1=n;
    while(n1>0) {
        f=1;
        r=n1%10;
        for(i=1;i<=r;i++){
            f=f*i;
        }
        c=c+f;
        n1=n1/10;
    }
    if(n==c){
        printf("yes %d is strong number",n);
    } else {
        printf("no %d is not strong number",n);
    }
    return 0;
}