// Write a program to Find sum and average of array
#include <stdio.h>
int main (){
    int n,i,a[100],s=0;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elments\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        s = s+ a[i];
    
    }
   float avg = s/n;
    printf("the sum of array is =%d\n",s);
    printf("the avg of array is =%f\n", avg);
    return 0;
}

