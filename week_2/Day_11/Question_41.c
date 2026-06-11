// Write a program to Write function to find sum of two numbers.

#include<stdio.h>

int sum (int a, int b ){

    return a + b ;
}

int main(){
    int a,b;
    printf ("enter the vakue of a and b =\n");
    scanf("%d%d",&a,&b);
    printf("%d ",sum(a,b));
    return 0;


}