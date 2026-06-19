//WAP to print recursive reverse of a number
#include <stdio.h>
int rev=0;
int reverse(int n) {
    if (n==0){
        return 0;
    } else {
        rev=(rev*10)+(n%10);
        reverse(n/10);
        return (rev);
    }
}
int main() {
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("reverse of %d is %d",n,reverse(n));
    return 0;
}