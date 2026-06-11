// Write a program to Write function to find factorial.
#include<stdio.h>

int fact (int n){
    int f=1;
    if(n < 0) {
        printf("Factorial is not defined for negative numbers\n");
    }
    else {
        for(int i = 1; i <= n; i++) {
            f = f * i;
        }
        printf("Factorial of the number = %d\n", f);
    }
    return 0;
}




int main (){
    int n;
    printf("enter the numbere n = ");
    scanf("%d",&n);
    printf(" factorial of the number is = %d ", fact(n));
    return 0;

}