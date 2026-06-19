//WAP to count set bits in a number
#include <stdio.h>
int main() {
    int binary,i,count=0;
    printf("enter the binary number\n");
    scanf("%d",&binary);
    while(binary>0){
        count++;
        binary=binary/10;
    }
    printf("the number of bits are %d",count);
    return 0;
}