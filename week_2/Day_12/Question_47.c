//WAP to write a function to print fibonacci series
#include <stdio.h>
int main() {
    int n;
    void fibo(int);
    printf("enter the limit\n");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int n){
    int i,t1=0,t2=1,num;
    printf("fibonacci series:\n");
    for(i=1;i<=n;i++){
        if(i==1){
            printf("%d\n",t1);
        } else if(i==2){
            printf("%d\n",t2);
        } else {
            num=t1+t2;
            t1=t2;
            t2=num;
            printf("%d\n",num);
        }
    }
}