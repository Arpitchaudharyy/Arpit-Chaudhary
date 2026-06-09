// Write a program to Recursive Fibonacci.

#include<stdio.h>

int Fibonacci (int n){
    int a=0;
    if(n==0){
    return 0;
    }
    if (n==1){
        return 1;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);

}

int main(){
    int fib , n ,i ;
    printf("enter the number n\n");
    scanf("%d",&n);
    for (i=0 ; i<=n ; i++){
    fib = Fibonacci(i);
    printf("%d ",fib);
    }
    return 0;
}
