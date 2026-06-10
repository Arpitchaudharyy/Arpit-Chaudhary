// Write a program to Print hollow square pattern.
// *****
// *   *
// *   *
// *   *
// *****
 
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of columns= ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        
        printf("*");
    }
    printf("\n");
    for (int l = 1; l <= n-2; l++)
    {
        printf("*");

       for (int j = 1; j <= n-2; j++)
     {
        printf(" ");
     }
     
     printf("*\n");
    }
    for (int m = 1; m <= n; m++)
    {
        
        printf("*");
    }
        
       return 0;
       

}