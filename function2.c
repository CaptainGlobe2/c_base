/*function with argument and without returntype*/
#include <stdio.h>
drawline(int n){
    int i;
     /*printf("enter the line you want");
    scanf("%d",n);*/
    for(i=1;i<=n;i++){
        printf("-");
    }
}
int main(){
   
    drawline(23);
    printf("\n welcome\n");
    drawline(23);
}