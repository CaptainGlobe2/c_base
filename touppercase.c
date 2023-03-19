#include <stdio.h>
#include <string.h>
int main()
{
    int in[50],i;
    printf("enter the string ");
    gets(in);
    for(i=0;i<strlen(in);i++)
    {
        if(in[i]>='a' && in[i]<='z')
        in[i]=in[i]-32;
    }
    puts(in);
    return 0;
}
