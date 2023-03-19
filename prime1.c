#include <stdio.h>
int main(){
    int n,r,i,flag=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=2;i<n-1;i++){
        r=n%i;
        if (r==0){
            flag++;
        }
        if (flag==0)
        {
            printf("it is prime");
        }
        else
        printf("it is not prime");
        
        
    }
    }