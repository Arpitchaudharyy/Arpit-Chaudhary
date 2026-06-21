//WAP to rotate the array to right
#include <stdio.h>
int main() {
    int n,i,a[100],k;
    void reverse(int a[],int,int);
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the steps you want to shift the array\n ");
    scanf("%d",&k);
    reverse(a,n-k,n-1);
    reverse(a,0,n-k-1);
    reverse(a,0,n-1);
    printf("after rotation:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}
void reverse(int a[],int start,int end){
    while(start<end){
        int t=a[start];
        a[start]=a[end];
        a[end]=t;
        start++;
        end--;
    }