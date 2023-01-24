#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *next;
}*head=NULL,*tail=NULL;
struct node *newnode;
struct node *current;
int size=0;
void main(){
    int choice,data;
    printf("MENU\n");
    printf("1.Create\n2.Traverse\n3.Insert at the begning\n4.Insert at the given position\n5.Insert at the end\n6.Exit\n");
    do{
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("Enter Data to be inserted\n");
            scanf("%d",&data);
            create(data);
            size++;
            break;
            case 2: traverse();
            break;
            case 3: printf("Enter the data to be inserted at the begining\n");
            scanf("%d",&data);
            insertatbeg(data);
            size++;
            break;
            case 4: printf("Enter the data to be inserted at given position\n");
            scanf("%d",&data);
            insertatgivenpos(data);
            size++;
            break;
            case 5: printf("Enter the data to be inserted at the end\n");
            scanf("%d",&data);
            insertatend(data);
            size++;
            break;
            case 6:exit(0);
            break;
            default :printf("You have inserted the wrong choice\n please enter it again\n");
            break;
        }
    }
    while(choice!=0);
}
create(data){
    newnode=(struct node *)malloc(sizeof(struct node));
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
traverse(){
    current=head;
    if(head==NULL){
        printf("\nlink is empty\n");
    }
    else{
        printf("The elements in linked list are \n");
        while (current!=NULL)
        {
            printf("%d",current->data);
            current=current->next;
            printf("\n");
        }
        printf("Traverse is successful\n");
    }
}
insertatbeg(data){
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    if(head==NULL){
    printf("Link is empty\n");
    newnode->next=NULL;
    }
    else{
    newnode->next=head;
    }
    head=newnode;
    printf("Insertion is successfull\n");


}
insertatend(data){
    current=head;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=0;
    if(head==0){
        printf("Link is empty\n");
        head=newnode;
    }
    else{
        while(current->next!=0){
            current=current->next;
        }
        current->next=newnode;
    }
    printf("Insertion is successfull\n");
}
insertatgivenpos(data){
    int pos;
    newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    printf("Enter the position to insert\n");
    scanf("%d",&pos);
    int i=1;
    while(i!=pos-1){
        current=current->next;
        i++;
    }
    newnode->next=current->next;
    current->next=newnode;
    return head;
    printf("insertion is successfull\n");


}