//WAP to sort words by length
#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("enter number of words:\n");
    scanf("%d",&n);
    char names[n][50];
    char temp[50];
    printf("enter %d names:\n",n);
    for(int i=0;i<n;i++){
        scanf("%s",names[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(strlen(names[j])>strlen(names[j+1])){
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],temp);
            }
        }
    }
    printf("names sorted by length:\n");
    for(int i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
    return 0;
}