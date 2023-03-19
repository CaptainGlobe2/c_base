#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,digit=0,temp,sum=0;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    digit++;
    
    temp=n;
    while(n>0)
    {
        sum=sum+pow(n%10,digit);
        n=n/10;
    }
    if(temp==sum)
    printf("it is armstrong number");
    else
    printf("it is not armstrong number");
    
    return 0;
}