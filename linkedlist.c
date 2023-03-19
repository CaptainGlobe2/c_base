#include<stdio.h>
#include<stdlib.h>

struct lnode{
    int data;
    struct lnode* next; //self referential node it means it refer the same block of the next node
};

typedef struct lnode node;

node* head = NULL;

void InsertAtBeginning(int value){
     node*newNode=(node*)malloc(sizeof(node));
     if(newNode==NULL){
        printf("out of memory");
        return;
     }//this senario does not hit it happend only the memory is full

     newNode->data=value;
    if(head==NULL){
        newNode-> next=NULL;//this is because it is the first value of linked list and there was no another node
        head=newNode;
    }

    else{//else is because there was an the node already exisist 
        newNode -> next=head;
        head=newNode;


    }

    printf("inserted %d at the beginning",value);

}

void display(){
    if(head==NULL){
        printf("list is empty");
        return;
    }
    node* temp = head;

    while(temp != NULL){//temp !=null this is for the loop is running until the temp not equal to null
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void insetAtPosition(int position,int value){
   node*newNode=(node*)malloc(sizeof(node));
     if(newNode==NULL){
        printf("out of memory");
     } 

     newNode->data = value;

     node* temp =head;

     for(int i=0;i<position;i++){//jump to previous nodee
        temp = temp ->next;
        if(temp==NULL){
            printf("invalid position");
        }
     }

     newNode ->next=temp ->next;
     temp ->next = newNode;//this is for first we set the pointer value to newNode next to temp next and how we allocate the new node to previous node is temp next of new node
    
    printf("inserted %d at position %d",value,position);


}

void deleteAtPosition(int position){
    node *temp = head;
    node* prev;
    if(head == NULL){
        printf("list is empty");
        return;
    }

    if(position==0){
        head=head->next;
        printf("deleted %d",temp->data);
        free(temp);
        return;
    }

    for(int i=1;i<=position;i++){
        prev = temp;
        temp = temp->next;
        if(temp==NULL){
            printf("invalid postion");
            return;
        }
    }
    prev ->next=temp->next;
    printf("deleted %d",temp->data);
    free(temp);
}

int main()
{
    int choice,value,position;
    while(1){
    printf("1.insert at the beginning");
    printf("2.display the list");
    printf("3.insert at the specified position");
    printf("4.delete from the specified position");
    printf("5.exit");
    printf("enter the choice");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        printf("enter the data");
        scanf("%d",&value);
        insertAtBeginning(value);
        break;
    
    case 2:
        display();
        break;

    case 3:
        printf("enter the positoion");
        scanf("%d",&position);
        if(position<0){
            printf("invalid position");
            break;
        }
        printf("enter the value");
        scanf("%d",&value);

        if(position==0){
            insertAtBeginning(value);
        }
        else{
            insertAtPosition(position,value);
        }
        break;

    case 4:
        printf("delete from the position");
        scanf("%d",&position);
        if(pos<0){
                    printf("Invalid position");
                    break;
                }
                deleteAtPos(pos);
                break;
    case 5:
        exit(0);

    default:
        printf("Wrong choice");
    }

    }
    return 0;
} 