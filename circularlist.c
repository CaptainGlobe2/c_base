#include <stdio.h>
#include<stdlib.h>

struct lnode
{
    int data;
    struct lnode *next;
};

typedef struct lnode node;

node* last=NULL;


void insertAtbeginning(int value)
{
    node* newNode = (node*)malloc(sizeof(node));
    if(newNode==NULL){
        printf("out of memory\n");
        return;
    }
    newNode->data = value;
    if(last==NULL){//list is empty
      newNode->next=newNode
      last=newNode;
    }
    else{
        newNode->next=last->next;
        last->next=newNode;
    }
}

void display()
{
    if(last==NULL){
        printf("the list is empty\n");
        return;
    }
    node* temp=last->next;
    do{
        printf("%d: ",temp->data);
        temp=temp->next;
    }while(temp!=last->next);
}

insertAtend(int value)
{
    node* newNode=(node*)malloc(sizeof(node));
    if(newNode==NULL){
        printf("out of memory\n");
        return;
    }
    newNode->data=value;
    if(last==NULL){
        printf("the list is empty\n");
        return;
    }
    if(last==NULL){//the list is empty
        newNode->next=newNode;
        last=newNode;
    }
    else{
        newNode->next=last->next;
        last->next=newNode;
        last=newNode;
    }
    printf("inserted %d at end of list\n",value);
    
}

void deleteAtBeginning()
{
    if(last==NULL){
        printf("the list is empty\n");
        return;
    }
    node* del;
    if(last->next==last)//only one element in the list
    {
        del=last;
        last=NULL;
    }
    else{
    del=last->next;
    last->next=last->next->next;
    }
    printf("deleted data %d",del->data);
    free(del);

}

void deleteAtBeginning()
{
    if(last==NULL){
        printf("the list is empty\n");
        return;
    }

    node *temp,*del;

    if(last->next==last)
    {
        del=last;
        last=NULL;
    }
    else
    {
        temp=last->next;
        while(temp->next!=last)
        {
            temp=temp->next;
        }
        del=last;
        temp->next=last->next;
        last=temp;

    }
    printf("deleted data%d", del->data);
    free(del);

}

int main()
{
    insertAtbeginning(3);
    display();


    return 0;
}