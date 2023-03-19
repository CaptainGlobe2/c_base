#include <stdio.h>
int main(){
    int a[5],sum;
    printf("enter the element of array ");
    for(int i=0; i<5; i++){
        scanf("%d",&a[i]);
    }
     sum=arraysum(a);
    printf("sum = %d\n",sum);
   

}
int arraysum(int a[]){
    int i,sum=0;
    for(i=0; i<5; i++){
        sum=sum+a[i];
    }
    return sum;
}