#include<stdio.h>
#include<string.h>
int main() {
    char str1[100],str2[100],str3[100];
    int n1,n2,k=0;
    printf("enter first string:\n");
    scanf("%s", str1);
    printf("enter second string:\n");
    scanf(" %s",str2);
    n1=strlen(str1);
    n2=strlen(str2);
    int visited[100]={0};
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(str1[i]==str2[j] && visited[j]==0){
                str3[k]=str1[i];
                visited[j]=1;
                k++;
                break;
            } 
        }
    }
    str3[k]='\0';
    printf("ccommon characters:\n");
    printf("%s", str3);
    return 0;
}