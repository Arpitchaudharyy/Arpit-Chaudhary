//WAP to find maximum frequency element in an array
#include <stdio.h>
int main() {
    int n,a[100],i,j,count,max_count=0,max_element;
    printf("enter the size of array\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
            if(a[j]==a[i]){
                count++;
            }
        }
        if(count>max_count){
            max_count=count;
            max_element=a[i];
        }
    }
    printf("element with maximum frequency: %d(appears %d times)",max_element,max_count);
    return 0;

}