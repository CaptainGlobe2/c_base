#include<stdio.h>
int main(){
    char s[50];
    int i;
    printf("enter the string:");
    scanf("%s",&s);
    for(i=strlen(s)-1;i>=0;i--){
        printf("%c",s[i]);
    }
}
