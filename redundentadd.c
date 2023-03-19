#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("enter the table number ");
    scanf("%d",&a);
    printf("enter the last number of multiply");
    scanf("%d",&b);
    sum = a;
    printf("%d ",sum);
    while(b>0){
        sum=sum+a;
        printf("%d ",sum);
        b--;
    }
    

    
}