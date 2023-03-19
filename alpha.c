#include <stdio.h>
int main(){
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c ",j+64);
        }
        printf("\n");
    }
}