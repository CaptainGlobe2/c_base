#include <stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("enter the fibonacci number ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    n=n-2;
    while(n>0)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
        n--;
    }
}