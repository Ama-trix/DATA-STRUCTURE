#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head =NULL,*tail=NULL;
void main(){
    int choice,data;
    printf("MENU\n");
    printf("1.Create A Singly Linked List\n2.Traversing\n3.Insertion At The Begning\n4.Exit\n");

    do{
        printf("Enter the choice:\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:printf("Enter the data to be inserted\n");
        scanf("%d",&data);
        create(data);
        break;
        case 2:traverse();
        break;
        case 3: printf("Enter the data to be inserted at the begning\n ");
        insertatbeg();
        break;
        case 4:exit(0);
        break;
        default:printf("You have entered the wrong choice\n Please enter it again\n");
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
void traverse(){
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
void insertatbeg(){
int x;
scanf("%d",&x);
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=x;
newnode->next=head;
head=newnode;
printf("Insertion is successful\n");
}