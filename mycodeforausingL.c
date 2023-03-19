#include <stdio.h>
#include <stdlib.h>
int arr[50];
int size=0;

void insert(int pos, int value){
    for(int i=size-1;i>=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    size++;
    printf("inserted at%d position%d",value,pos);
}
void delete(int pos){
    int i;
    int del=arr[pos];
    for(i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("deleted at%d position%d",del,pos);
}

void display(){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}

int main()
{
    int choice,pos,value;
    while(1){
    printf("1.add the element to the last of array");
    printf("2.insert the element");
    printf("3.delete the element");
    printf("4.display");
    printf("5.exit");
    printf("enter your choice");
    scanf("%d", &choice);
    
    switch(choice) {
        case 1:
            printf("enter the value");
            scanf("%d", &value);
            arr[size++]=value;
            break;

        case 2:
            if(size==arr[50]){
                printf("array is full");
                break;
            }
            printf("enter the position");
            scanf("%d", &pos);

            if(pos<0 || pos>=size)
            {
                printf("invalid position");
                break;
            }
            printf("enter the data");
            scanf("%d", &value);
            insert(pos,value);

        case 3:
            if(size == 0){
                printf("the stack is empty");
                break;
            }
            printf("enter the postion");
            scanf("%d", &pos);
            if(pos<0 || pos>=size)
                    printf("Invalid position");
                else
                    delete(pos);
                break;
        case 4:
        display();
        break;

        case 5:
        exit(0);
        
        default: printf("wrong choice");
                    break;
    }

    }
    return 0;
}