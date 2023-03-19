#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the number to be sum of number:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        /* code */
        sum=sum+i;
    }

    printf("sum of number %d",sum);
    
}