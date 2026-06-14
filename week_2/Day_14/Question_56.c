//WAP to find duplicates in array
#include <stdio.h>
int main() {
    int n,i,a[100],j;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d is duplicate",a[i]);
                break;
            }
        }
    }
    return 0;
}