//WAP to linear search an element in array
#include <stdio.h>
int main() {
    int n,i,a[100],s,loc=-1;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    printf("enter the element you want to search\n");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(a[i]==s){
            loc=i;
            break;
        }
    }
    if(loc==-1){
        printf("not found");
    } else {
        printf("found at %d position",loc+1);
    }
    return 0;
}