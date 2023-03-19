#include<stdio.h>
int main()
{
    int s1[50],s2[50],i;
    printf("enter the string to be copied\n");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)
        s2[i] =s1[i];
    puts(s2);
    return 0;
}