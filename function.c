#include <stdio.h>
int add(int a,int b){
    int c;
    c=a+b;
    return c;
}
int main(){
    int a,b,c;
    a=5;
    b=5;
    c=add(a,b);
    printf("%d",c);
    printf("\n%d",add(22,22));
}