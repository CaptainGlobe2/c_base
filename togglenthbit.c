#include<stdio.h>
int main()
{
    int num,n,toggled;
    printf("enter the number of bit ");
    scanf("%d",&num);

    printf("enter the bit to be toggled (0-31) ");
    scanf("%d",&n);
    toggled=num^(1<<n);
    printf("toggled %d",toggled);
    return 0;
}