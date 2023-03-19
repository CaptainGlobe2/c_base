#include<stdio.h>
#include<math.h>
int main(){
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    for (i=2;i<sqrt(n);i++){
        if(n%i==0){
            printf("it is not prime number");
        }
        else{
            printf("it is prime number");
        }
    }
}