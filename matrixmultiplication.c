#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q,k;
    printf("enter the row and column of  the first matrix ");
    scanf("%d%d",&m,&n);

    printf("enter the element ");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    printf("enter the row and column of the second matrix\n");
    scanf("%d%d",&p,&q);

    printf("enter the element of second matrix\n");
    for(i=0;i<p;i++)
        for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);

    if(n!=p)
    {
        printf("cannot mulutiply this matrix");
        exit(0);
    }

    
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j] =0;
            for(k=0;k<n;k++)
            {
                c[i][j] = c[i][j] + a[i][k]*b[k][j];
            }
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
            printf("%d ",c[i][j]);
    printf("\n");
    }

    return 0;
}