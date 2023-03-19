#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    if(n&1)
    printf("the number is set to 1\n");
    else
    printf("the number is not set");
}