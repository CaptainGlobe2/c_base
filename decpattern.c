#include <stdio.h>
int main(){
    int n,i,j;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=1;j--){
            printf("%d ",j);
    }
    printf("\n");
}
}