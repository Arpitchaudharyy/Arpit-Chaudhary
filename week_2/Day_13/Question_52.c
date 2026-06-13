//WAP to count even and odd elements in an array
#include <stdio.h>
int main() {
    int n,i,a[100],c1=0,c2=0;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            c1++;
        } else {
            c2++;
        }
    }
    printf("number of even elements=%d\n",c1);
    printf("number of odd elements=%d",c2);
    return 0;
}