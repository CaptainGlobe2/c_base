#include<stdio.h>
int main()
{
    int a[50],size,i,j,temp;
    printf("eneter the size of the array ");
    scanf("%d",&size);
    printf("enter the element of the array ");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=0;i<size-1;i++)
    {
         for(j=i+1;j<size;j++)
         {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i] =a[j];
                a[j] = temp;
            }
         }
    }
    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    return 0;
}