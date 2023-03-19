#include <stdio.h>
#include <string.h>
int main()
{
    int s1[50],s2[50];
    printf("enter the string ");
    gets(s1);
    strcpy(s2,s1);
    puts(s2);
}