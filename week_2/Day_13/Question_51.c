//WAP to find largest and smallest element in an array
#include <stdio.h>
int main() {
    int n,i,a[100],t,s;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elments\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n;i++){
        if(a[i]>t){
            t=a[i];
        } else {
            t=a[0];
        }
    }
    printf("largest element is %d\n",t);
    s=a[0];
    for(i=0;i<n;i++){
        if(a[i]<s){
            s=a[i];
        } else {
            s=a[0];
        }
    }
    printf("smallest element is %d",s);
    return 0;
}