//WAP to find missing element in array
#include <stdio.h>
int miss(int a[],int n){
    for(int i=1;i<=n;i++){
         int flag=0;
        for(int j=0;j<n-1;j++){
            if(a[j]==i){
                flag=1;
                break;
            }

        }
        if(flag==0){
            return i;
        }
    }
    return 0;
}
int main(){
    int n,a[100];
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the number from 1 to %d\n",n);
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    printf("missing element = %d",miss(a,n));
}