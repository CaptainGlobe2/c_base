/*function without argument with returntype*/
#include <stdio.h>
float getinput(){
    int input;
    printf("enter the input");
    scanf("%f",&input);
    return input;
}
int main(){
    float f1,f2,f3;
    f1 = getinput();
    f2 = getinput();
    f3=f1*f2;
    printf("%f",f3);
}
