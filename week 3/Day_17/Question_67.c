//WAP to find intersection of arrays
#include <stdio.h>
int intersection(int a[],int size1,int b[],int size2,int result[]){
    int k=0;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(a[i]==b[j]){
                result[i]=a[i];
                k++;
            }
        }
    }
    return k;
}
int main() {
    int size1,size2,a[100],b[100],result[100];
    printf("enter the size of first and second array<=100\n");
    scanf("%d%d",&size1,&size2);
    printf("enter the elements of first array\n");
    for(int i=0;i<size1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the elements of second array\n");
    for(int i=0;i<size2;i++){
        scanf("%d",&b[i]);
    }
    int k=intersection(a,size1,b,size2,result);
    printf("array after intersection\n");
    for(int i=0;i<k;i++){
        printf("%d\n",result[i]);
    }
    return 0;
}