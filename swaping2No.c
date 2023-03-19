#include <stdio.h>
int swap(int *p1, int *p2){
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
int main(){
    int a,b;
    printf("enter the a value ");
    scanf("%d",&a);
    printf("enter the b value ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d b=%d\n",a,b);
}