#include <stdio.h>
int add(int *p){
    (*p)++;
}
int main(){
    int a=7;
    add(&a);
    printf("%d",a);
}