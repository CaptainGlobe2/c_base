#include <stdio.h>
int main(){
    int b,e,result=1;
    printf("enter the base of the number ");
    scanf("%d",&b);
    printf("enter the exponent of the number ");
    scanf("%d",&e);
    while (e>0)
    {
        result=result*b;
        e--;
    }
    printf("%d",result);
    
}