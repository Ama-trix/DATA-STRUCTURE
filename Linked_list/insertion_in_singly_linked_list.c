#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
int next;
}*head=NULL,*tail=NULL;
void insert();
void display();
void main(){
    int data;
    struct node *newnode,*prevnode;

    int i,n; /* number of nodes in linked list*/
    printf("Enter the number of nodes in the linked list");
    scanf("%d",&n);
    printf("Enter the data");
    newnode=(struct node *) malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    head=newnode;
    /*Use of loops increase the complaxicity of the program */
    for(i=2;i<=n;i++){
        scanf("%d",&data);
        newnode = (struct noden*) malloc(sizeof(struct node));
        newnode->data = data;
        newnode->next = NULL;
        head->next = newnode;
    }
}
