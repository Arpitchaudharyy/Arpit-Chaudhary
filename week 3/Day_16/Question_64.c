//WAP to remove duplicates from array
#include <stdio.h>
int main () {
    int n,a[100],i,j;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                for(int k=j;k<(n-1);k++){
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }
    printf("updated array after removing duplicates\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}