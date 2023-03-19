#include <stdio.h>
int main()
{
    int num,count=0;
    printf("enter the number: ");
    scanf("%d", &num);
    while(!(num&1))
    {
        count++;
        num=num>>1;
    }
    printf("\nnumber of trailing zeroes is %d",count);
}