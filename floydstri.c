#include <stdio.h>
int main()
{
    int rows,i,j,num=1;
    printf("enter the number of rows to process\n");
    scanf("%d", &rows);

    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++){
        printf("%d ",num++);
        }
        printf("\n");
    }
    
    return 0;
}
