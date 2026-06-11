// Write a program to Write function to find maximum.

#include<stdio.h>

int max(int a , int b){

    if (a>=b)
    return a;
    else 
    return b;
}
int main (){
    int a , b;
    printf("enter the two numbere a and b =\n");
    scanf("%d%d",&a ,&b);
    printf(" the maximumn number is = %d ", max(a,b));
    return 0;

}