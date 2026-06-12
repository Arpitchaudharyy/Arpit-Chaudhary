//WAP to write a function to check perfect number
#include <stdio.h>
int main() {
    int n;
    void perfect(int);
    printf("enter the number\n");
    scanf("%d",&n);
    perfect(n);
    return 0;
}
void perfect(int n){
    int c=0,i,original;
    original=n;
    for(i=1;i<n;i++){
        if(n%i==0){
            c=c+i;
        }
    }
    if(c==original){
        printf("yes the number is perfect number");
    } else {
        printf("no the number is not perfect number");
    }

}