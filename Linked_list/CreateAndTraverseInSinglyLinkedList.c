#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*tail=NULL; 
void addnode(int data){
struct node *newnode = (struct node *)malloc(sizeof(struct node ));
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
}
void main(){
    int n1, n2,n3,n4;
    printf("Enter the data for each node:\n ");
    scanf("%d\n%d\n%d\n%d",&n1,&n2,&n3,&n4);
    addnode(n1);
    addnode(n2);
    addnode(n3);
    addnode(n4);
    display();

}
void display(){
    struct node * current=head;
    if(head==NULL){
        printf("LINK IS EMPTY\n");
    }
    else{
        printf("The elements in the linked list are\n");
        while(current!=NULL){
        printf("%d\n",current->data);
        current=current->next;
        }
    }
}