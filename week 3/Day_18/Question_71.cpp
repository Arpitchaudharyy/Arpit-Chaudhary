//WAP to binary search
#include <stdio.h>
int main() {
    int n,a[100],l,u,m,se;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the array in ascending order\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element to search\n");
    scanf("%d",&se);
    l=0;
    u=n-1;
    m=(l+u)/2;
    while(l<u && a[m]!=se){
        if(se<a[m]){
            u=m-1;
        } else {
            l=m+1;
        }
        m=(l+u)/2;
    }
    if(a[m]==se){
        printf("%d found at %d position",se,m+1);
    } else {
        printf("not found");
    }
    return 0;
}