//WAP to find x to power n wihout usinf pow function
#include <stdio.h>
int main() {
    int x,n,i,power=1;
    printf("enter the number\n");
    scanf("%d",&x);
    printf("enter the power\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        power=power*x;
    }
    printf("%d when multiplied %d times gives %d",x,n,power);
    return 0;
}