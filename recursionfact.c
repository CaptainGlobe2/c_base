#include <stdio.h>
int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n;
    printf("enter the factorial of the number of numbers\n");
    scanf("%d",&n);
    printf("%d",fact(n));
}