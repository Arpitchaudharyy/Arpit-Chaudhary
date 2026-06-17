//WAP to find union of two array
#include <stdio.h>
int isduplicate(int a[], int size, int value ){
    for(int i=0;i<size;i++){
        if(a[i]==value) {
           return 1;
        }    
    }
    return 0;
    
}
int findunion(int a[],int size1,int b[],int size2,int unionresult[]){
    int k=0;
    for(int i=0;i<size1;i++){
        if(!isduplicate(unionresult,k,a[i])){
            unionresult[k]=a[i];
            k++;
        }
    }
    for(int i=0;i<size2;i++){
        if(!isduplicate(unionresult,k,b[i])){
            unionresult[k]=b[i];
            k++;
        }
    }
    return k;

}
int main(){
    int size1,a[100],size2,b[100];
    printf("enter the size of first and scond array<=100\n");
    scanf("%d%d",&size1,&size2);
    printf("enter elements of first array\n");
    for(int i=0;i<size1;i++){
        scanf("%d",&a[i]);
    }
    printf("enter elements of second array\n");
    for(int i=0;i<size2;i++){
        scanf("%d",&b[i]);
    }
    int unionresult[size1+size2];
    int k=findunion(a,size1,b,size2,unionresult);
    printf("after union the array\n");
    for(int i=0;i<k;i++){
        printf("%d\n",unionresult[i]);
    }
    return 0;

}