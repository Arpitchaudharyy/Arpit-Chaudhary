//WAP to find pair with given sum in an array
#include <stdio.h>
int main() {
    int sum,n,a[100],i,j,found=0;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the target sum\n");
    scanf("%d",&sum);
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("pair found:(%d,%d)",a[i],a[j]);
                found=1;
            }
        }
    }
    if(found==0){
        printf("no such pair found");
    }
    return 0;
}