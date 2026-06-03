// Write a program to Print prime numbers in a range.
#include <stdio.h>
int main() {
    int i,j,n1,n2,c;
    printf("enter lower number  greater than 1\n");
    scanf("%d",&n1);
    printf("enter upper number\n");
    scanf("%d",&n2);
    printf("prime numbers between %d and %d\n",n1,n2);
    for(i=n1;i<=n2;i++){
        c=0;
        for(j=2;j<i;j++){
            if(i%j==0){
                c=c+1;
            }
        }
        if(c==0 && i>1) {
           printf("%d\n",i);
        }
    }
    return 0;
}