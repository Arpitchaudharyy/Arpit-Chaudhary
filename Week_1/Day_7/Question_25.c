// Write a program to Recursive factorial.
#include<stdio.h>
int factorial(int n){  
    if (n==1 || n==0){
        return 1;
    }
    else
    return n*factorial(n-1);
}
int main (){
    int fact,n;
    printf("enter the number n\n");
    scanf("%d",&n);
    fact = factorial(n);
    printf("the factorial of the number is %d", fact);
    return 0;
    
}