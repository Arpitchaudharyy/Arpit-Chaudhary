//WAP to move zeroes to end
#include <stdio.h>
int main() {
    int n,i,a[100],count=0;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]!=0){
            a[count]=a[i];
            count++;
        }
    }
    while(count<n){
        a[count]=0;
        count++;
    }
    printf("now array:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}