// Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
#include <math.h>
int main() {
    int i,i1,i2,t1,t2,d,r,arm;
    printf("enter the lower number\n");
    scanf("%d",&t1);
    printf("enter the upper number\n");
    scanf("%d",&t2);
    printf("armstrong numbers from %d to %d\n",t1,t2);
    for(i=t1;i<=t2;i++){
        i1=i2=i;
        d=arm=0;
        while(i1>0){
            d++;
            i1=i1/10;
        }
        while(i2>0){
            r=i2%10;
            arm=arm+pow(r,d);
            i2=i2/10;
        }
        if(i==arm) {
            printf("%d\n",i);
            continue;
        }
    }
    return 0;
}