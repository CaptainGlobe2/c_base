#include <stdio.h>
int* getarray();
int main(){
    int *p,i;
    p=getarray();
    for(i=0;i<5;i++) {
        printf("%d ",*(p+i));
        return 0;
        
    }
}
int* getarray(){
    static int a[5],i;
    printf("enter the elements");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        return a;
    }
}