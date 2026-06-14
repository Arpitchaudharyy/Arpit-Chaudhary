//WAP to find frequency of an element
#include <stdio.h>
int main() {
    int n,i,a[100],s,c=0;
    printf("enter the size of array<=100\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the element whose frequency u want to know\n");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(a[i]==s){
            c++;
            continue;
        }
    }
    printf("%d is repeated %d times",s,c);
    return 0;
}