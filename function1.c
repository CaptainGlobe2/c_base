/*function without return and without arguments*/
#include <stdio.h>
drawline(){
    int i;
    printf("\n\t\t welcome\n");
    for(i=1;i<=40;i++){
        printf("-");
    }
}
int main(){
    drawline();
}