#include <stdio.h>
#include<math.h>
int main()
{
    int n,i,dec=0;
    printf("enter the binary number ");
    scanf("%d", &n);
    i=0;
    while(n>0)
    {
        
        dec=dec+n%10*pow(2,i);
        n=n/10;
        i++;
    }
    printf("%d",dec);
}