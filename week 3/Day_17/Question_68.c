//WAP to find common elements of arrays
#include <stdio.h>
int main() {
    int size1,a[100],size2,b[100];
    printf("enter the size of first and second arrays<=100\n");
    scanf("%d%d",&size1,&size2);
    printf("enter the elements of first array\n");
    for(int i=0;i<size1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements of second array\n");
    for(int i=0;i<size2;i++){
        scanf("%d",&b[i]);
    }
    printf("common elements in two arrays\n");
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(a[i]==b[j]){
                printf("%d",a[i]);
            }
        }
    }
    return 0;
}