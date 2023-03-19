#include <stdio.h>
int main()
{
    int i,j,k,n;
    printf("enter the number of the lines ");
    scanf("%d",&n);
    for(i=n;i>=0;i--)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=0;j<k;j++){
            printf("* ");
        }
        printf("\n");
    }

}