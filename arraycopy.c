#include<stdio.h>
int main(){
    int size,a[30],b[30],i,j;
    printf("enter the number of size of array");
    scanf("%d",&size);
    printf("enter the number of elements in the array");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    i=0;j=0;
    while (i<size)
    {
        if(a[i]<0){
            i++;
            continue;
        }
        b[j]=a[i];
        j++;
        i++;
    }
    size=j;
    for(j=0;j<size;j++){
        printf("%d",b[j]);
    }
    
}