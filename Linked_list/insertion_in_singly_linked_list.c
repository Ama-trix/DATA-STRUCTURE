#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
}*head=NULL,*tail=NULL;
int data;
// void insertatbeg();
// void insertatend();
// void insertatgivpos();
int createlist();
int createnode();
// void display();
int menu();
createnode(){
    struct node *newnode;
    newnode=(struct node*) malloc(sizeof(struct node));
    return(newnode);
}
int menu(){
    printf("Enter your choice to perform the following operations \n 1. Insertion at begining  \n 2. Insertion at given position \n 3. Insertion at end \n 4. Display \n 5. Exit");
    scanf("%d",&choice);
    return(choice);
}
void main(){
    while(1){
        switch (menu())
        {
        case 1:insertatbeg();
            break;
        case 2:insertatgivpos();
            break;
        case 3:insertatend();
            break;
        case 4:display();
            break;
        default: printf("You have entered the wrong choice please check it again ");
            break;
        }
    }

}
createlist(){
    int n,i=1;
    
    printf("Enter the number of nodes in the list");
    scanf("%d,&n");
    do{
    printf("Enter the element");
    scanf("%d",&data);
    newnode=createnode ();
    newnode->data=data;
    newnode->next=NULL;
    if(head==0){
        head=newnode;
    }
    else{

    }
    i++;
    }
    while(i<=n)
    
}
