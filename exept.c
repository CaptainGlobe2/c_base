#include <stdio.h>
int main(){
    int num,e,i;
    printf("enter the number of lenght");
    scanf("%d",&num);
    printf("enter the exept number");
    scanf("%d",&e);
    for(i=0;i<num;i++){
        if(i==e){
            continue;
            printf("%d",i);
        }
        printf("%d",i);
    }
}