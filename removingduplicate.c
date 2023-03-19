#include<stdio.h>
int main()
{
    int a[40],i,j,k,size;
    printf("enter the size of the array");
    scanf("%d",&size);

    printf("enter the number of element ");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<size;k++)
                {
                    a[j]=a[j+1];
                }
                size--;
                j--;
            }
        }
    }
    printf("\n after removing the duplicates ");
    for(i=0;i<size;i++){
    printf("%d ",a[i]);
    }
}