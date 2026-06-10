// Write a program to Print repeated character pattern.
// A
// BB
// CCC
// DDDD
// EEEEE

#include<stdio.h>
int main (){
    int n;
    printf("enter the number of columns = ");
    scanf("%d",&n);
   for (int i = 0; i < n; i++) {

        for (int j = 0; j <= i; j++) {
            printf("%c", 'A' + i);
        }

        printf("\n");
    }

    return 0;
}