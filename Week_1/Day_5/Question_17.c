//WAP to find whether a number is a perfect number or not
#include <stdio.h>
int main() {
int n,i,c=0;
printf("enter the number\n");
scanf("%d",&n);
for(i=1;i<n;i++) {
    if(n%i==0) {
        c=c+i;
    }
}
if(n==c) {
    printf("yes %d is a perfect number",n);
} else {
    printf("no %d is not a perfect number",n);
}
return 0;
}