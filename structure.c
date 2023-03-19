#include <stdio.h>
struct student{
        char name[26];
        int rollNo;
        int marks;

    };
void printStr(struct student)
int main(){
    
    struct student s1={"salman",21,88};
    printStr(s1);
    return 0;
}
void printStr(struct student s){
    printf("name: %s",s.name);
    printf("rollNo: %d",s.rollNo);
    printf("marks: %d",s.marks);
}