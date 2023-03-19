#include <stdio.h>
int main()
{
    int a,b;
    printf("enter the number ");
    scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swaping %d a %d b",a,b);
}