//WAP to find second largest element in an array
#include <stdio.h>
int main() {
    int n,i,a[100],t,z;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n;i++){
        if(a[i]>t){
            t=a[i];
        } 
    }
    z=a[0];
    for(i=0;i<n;i++){
        if(a[i]>z && a[i]<t){
            z=a[i];
        } 
    }
    printf("\nsecond largest = %d",z);
    return 0;
}