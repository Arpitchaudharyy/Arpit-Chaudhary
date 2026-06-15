//WAP to reverse the array
#include <stdio.h>
int main() {
    int n,i,a[100];
    printf("enter the size of array <=100\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("reverse of array:\n");
    for(i=(n-1);i>=0;i--){
        printf("%d\n",a[i]);
    }
    return 0;
}