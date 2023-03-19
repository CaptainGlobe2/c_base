#include <stdio.h>
int main(){
    int n,i,fact=1;
    printf("enter the fact of number: ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        /* code */
        fact=fact*i;
    }
    printf("the factorial is %d\n",fact);
}