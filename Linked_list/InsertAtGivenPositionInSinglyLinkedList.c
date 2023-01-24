#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*head=NULL,*tail=NULL;
int size=0;
void main(){
    int choice, data;
    printf("MENU\n");
    printf("1.Create Linked List\n2.Traverse\n3.Insert at index\n");
    do{
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: printf("Enter the data to be inserted\n");
        scanf("%d",&data);
        create(data);
            break;
        case 2:traverse();
        break;
        case 3:insertatindex();
        break;
        case 4:exit(0);
        default:printf("You have entered the wrong choce please enter it again\n");
            break;
        }
    }
    while(choice!=0);
}
void create(data){
    struct node *newnode=(struct nodee *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==0){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
    printf("Data is successfully inserted\n");
}
void traverse(){
    struct node *current=head;
    if(head==NULL)
    printf("Link is empty\n");
    else{
        printf("The elements of the linked list are\n");
        while (current!=0)
        {
            printf("%d\n",current->data);
            current=current->next;
        }
        
    }
}
void insertatindex(struct node *head){
    int pos,data;
    int i=0;
    struct node *temp;
    temp=head;
    struct node *newnode=(struct node * )malloc(sizeof(struct node));
    printf("Enter the data to be inserted\n ");
    scanf("%d",&data);
    printf("Enter the position to be inserted \n");
    scanf("%d",&pos);
    newnode->data=data;
    temp=head;
    for(i=0;i<pos;i++){
        temp=temp->next;
        if(temp==NULL){
        printf("\nCant insert\n");
        return;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        printf("node inserted\n");
    }
}