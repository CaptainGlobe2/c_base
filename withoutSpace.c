#include<stdio.h>
int main()
{
    int in[50],out[50],i,j;
    printf("enter the string ");
    gets(in);
    for(i=0,j=0;i<strlen(in);i++)
    {
        if(in != ' ')
        {
            out[j++] = in[i];
        }
    }
    out[j] = '\0';
    printf("after removing space %s",out);
    return 0;
    
}