#include<stdio.h>
int main()
{
    int size,a[50],index,search;
    printf("enter the size of the array");
    scanf("%d",&size);
    printf("\n enter the element of the array");
    for(int i=0;i<size;i++)
    scanf("%d",&a[i]);
    printf("the element you want to search for");
    scanf("%d",&search);
    index=find(a,size,search);
    if(index==-1)
    printf("Not found");
    else
    printf("the element founded at index %d",index);
}
int find(int a[],int size,int search)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(a[i]==search)
        return i;//return the index of the array if it was found 
    }
    return -1;//if it is not found retrun -1
}