#include<stdio.h>
#include<string.h>
int main()
{
    int l,r,pali=1;
    char str[30];
    printf("enter the string we check it is palindrome or not ");
    scanf("%s",&str);
    l=0;
    r=strlen(str)-1;
    while(l<r)
    {
        if(str[l]!=str[r]){
        pali=0;
        break;
        }
        l++;
        r--;

    }
    if(pali==0){
        printf("this is not palindrome");

    }
    else
    printf("palindrome");
}