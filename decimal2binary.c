#include<stdio.h>
int main()
{
    int n,bin[32],i,j;
    printf("enter the decimal number to be converted ");
    scanf("%d",&n);
    i=0;
    while(n>0)
    {
        bin[i]=n%2;
        n=n/2;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",bin[j]);
    }


    return 0;
}