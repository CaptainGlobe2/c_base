#include<stdio.h>
int main(){
    int a,b;
    a=5;
    b=10;
    printf("before swapping a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a=%d,b=%d\n",a,b);
    return 0;
}