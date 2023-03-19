#include<stdio.h>
int main()
{
    int row,i,j,k;
    printf("enter the number of rows ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(k=1;k<=row-i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}