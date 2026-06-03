#include <stdio.h>
int main() {
    int n1,n2,gcd,remainder,lcm,og1,og2;
    printf("enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    og1=n1;
    og2=n2;
    while(n2!=0) {
        remainder=n1%n2;
        n1=n2;
        n2=remainder;
    }
    gcd=n1;
    lcm=(og1*og2)/gcd;
    printf("lcm=%d\n",lcm);
    return 0;
}