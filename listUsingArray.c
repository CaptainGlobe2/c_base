#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 50
int arr[MAXSIZE];
int size = 0;

void display()
{
    int i;
    if(size == 0){
        printf("array is empty\n");
    }
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);
}

void ins(int pos,int val)
{
    int i;
    for(i=size-1;i>=size;i--)
        arr[i+1]=arr[i];

    arr[pos] = val;
    size++;
    printf("inserted at pos%d at the value%d",pos,size);
}

void del(int pos)
{
    int i;
    int del=arr[pos];
    for(i=pos;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    printf("deleted %d at pos %d",del,pos);
}

int main()
{
    int choice,val,pos;
    while(1){
        printf("list \n");
        printf("1.insert at the end of list\n ");
        printf("2.inset at the specified position\n ");
        printf("3.delete a specified position\n ");
        printf("4. display \n");
        printf("5. exit\n");
        printf("enter your choice ");
        scanf("%d ",&choice);

        switch(choice){
            case 1:
               
                printf("enter the data");
                scanf("%d ",&val);
                arr[size++] = val;
            
            case 2:
                if(size==MAXSIZE)
                {
                    printf("array is full ");
                    break;
                }
                printf("enter the position ");
                scanf("%d",&pos);
                if(pos<0 && pos>size)
                {
                    printf("you entered the invalid position");
                    break;
                }
                printf("enter the value you want");
                scanf("%d",&val);
                ins(pos,val);
                break;
            
            case 3:
                if(size==0)
                {
                    printf("the array is empty");
                    break;
                }
                printf("enter the position");
                scanf("%d",&pos);
                if(pos<0 && pos>=size)
                {
                    printf("you entered the invalid position");
                    break;
                }
                
                del(pos);
                break;
            case 4:
                display();
                break;
            
            case 5:
                printf("existing the program.....");
                exit(0);
            default :
                printf("you entered the wrong choice");
                break;

                
        }
    }
}
