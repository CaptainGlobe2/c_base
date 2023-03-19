#include <stdio.h>
int main(){
    int num,temp,sumOfFact=0;
    printf("enter the number ");
    scanf("%d",&num);
    temp=num;
    while(num>0){
        sumOfFact=sumOfFact+ fact(num%10);
        num=num/10;
    }
    if(temp==sumOfFact){
        printf("it is stronge number");
    }
    else{
        printf("it is not a stronge number");
    }


    return 0;
}

int fact(int n){
    int i,f=1;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}