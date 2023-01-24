#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head=NULL,*tail=NULL;
void main(){
    int choice, data;
    printf("MENU\n");
    
    do{
    printf("1.FOR INSERTION\n2.FOR TRAVERSING\n");
    printf("Enter Your Choice\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:printf("Enter the data\n");
    scanf("%d",&data);
    create(data);
        break;
    case 2:traversing();
    break;
    case 3:exit(0);
    break;
    default:printf("You have entered the wrong choice please enter it again\n ");
        break;
    }
    }
    while(choice!=0);
}
void create(data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
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
    printf("The data is successfully inserted\n");
}
void traversing(){
    struct node * current=head;
    printf("The elements in linked list are:\n");
    if(head==NULL)
    printf("Linked list is empty\n");
    while (current!=NULL)
    {
        printf("%d\n",current->data);
        current=current->next;
    }
    printf("Traversing is successful\n");

}