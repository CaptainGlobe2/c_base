#include<stdio.h>
#include <stdlib.h>
int main()
{
    int totalrow,row,i,j,k,space,star;
    printf("enter the number of rows ");
    scanf("%d",&totalrow);
    row=totalrow/2+1;
    if(totalrow%2 == 0){
        printf("diamond cannot be printed for even numbers");
        exit(0);

    }

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

    space=1;
    star=totalrow-2;
    for(i=row-1;i>=1;i--)
    {
        for(j=1;j<=space;j++)
            printf("  ");
        space++;
        

        for(j=1;j<=star;j++)
            printf("* ");
        star=star-2;
        

        printf("\n");

    }



}