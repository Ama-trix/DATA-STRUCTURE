#include<stdlib.h>
#include<stdio.h>
// void create(int);
// void traverse();
// void insertatend(int);
struct node{
    int data;
    struct node *next;
}*head=NULL,*tail=NULL;
void main(){
    int choice,data;
    printf("MENU");
    printf("\n1.Create Linked List\n2.Traverse\n3.Insert At the end\n4.exit\n");
    do{
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1: printf("Enter The data\n");
        scanf("%d",&data);
        create(data);
        break;
        case 2: traverse();
        break;
        case 3: printf("Enter the data\n");
        scanf("%d",&data);
        insertatend(data);
            break;
        case 4:exit(0);
        break;
        default:printf("You have entered the wrong choice\nPlease enter again\n");
            break;
        }
    }
    while(choice!=0);
}
create(data){
    struct node *newnode;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL){
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
    if(head==NULL){
        printf("\nLink is empty\n");
    }
    else{
    printf("The elements in the list are\n ");
    while(current!=NULL){
        printf(" %d\n",current->data);
        current=current->next;
    }
    }
}
void insertatend(data){
    struct node *newnode;
    struct node *temp;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    temp=head;
    if(head==0){
        head=newnode;
    }
    else{
    while (temp->next!=0)
    {
        temp=temp->next;
    }
    
    }
    temp->next=newnode;

    printf("Insertion at the end is successfull\n");
}