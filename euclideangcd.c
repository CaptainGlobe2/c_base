#include <stdio.h>
int gcdfun(int  ,int );
int main()
{
    int a,b,gcd;
    printf("enter the gcd of the numbers ");
    scanf("%d %d",&a,&b);
    gcd=gcdfun(a,b);
    printf("the gcd of the numbers is %d",gcd);
    return 0;

}
int gcdfun(int a ,int b)
{
    if(a==0)
        return b;
        gcdfun(b%a,a);
    
}