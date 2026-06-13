// Write a program to Input and display array.

#include <stdio.h>
int main (){
    int n,i,a[100];
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elments\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the elements of array:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

