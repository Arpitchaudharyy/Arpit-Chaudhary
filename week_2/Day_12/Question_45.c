//WAP to write a function to check palindrome
#include <stdio.h>
int main (){
    int n;
    void pal(int n);
    printf("enter the number\n");
    scanf("%d",&n);
    pal(n);
    return 0;
}
void pal(int n){
    int r,rev=0,original;
    original=n;
    while(n>0){
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==original){
        printf("yes the number is palindrome");
    } else {
        printf("the number is not palindrome");
    }
}