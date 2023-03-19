#include <stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,r,c;
    
    printf("enter the row and column of the matrix");
    scanf("%d%d",&r,&c);

    printf("enter the element");

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("you entered:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        printf("%d ",a[i][j]);

        printf("\n");
    }
    
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            b[j][i]=a[i][j];

    printf("how value stored in b");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",b[i][j]);

        printf("\n");
    }
    printf("the transpose of the matrix is \n");

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
}