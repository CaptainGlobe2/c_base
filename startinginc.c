#include<stdio.h>
int main(){
    int i,j,n;
    printf("enter the number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}