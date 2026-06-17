// Write a program to Merge arrays.

#include<stdio.h>
int main(){
    int n1,n2,n3,a[100],b[100],merge[100];
    printf("enter the size of first array and second array<=100\n");
    scanf("%d%d",&n1,&n2);
    printf("enter the elements for first array\n");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elements for second array\n");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d",&b[i]);
    }
    n3 = n1+n2;
    for (int i = 0; i < n1; i++)
    {
        merge[i]=a[i];
    }
    for (int i = 0; i < n2; i++)
    {
         merge[n1+i]=b[i];
    }
    printf("merged array\n");
    for (int i = 0; i < n3; i++)
    {
        printf("%d\n",merge[i]);
    }
    return 0;
    
}