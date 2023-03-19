#include <stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
        
        
    }
    if(n==sum)
        {
            printf("the number is perfect number");

        }
        else{
            printf("the number is not perfect number");
        }
}