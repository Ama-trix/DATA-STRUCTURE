#include<stdlib.h>
#include<stdio.h>
struct node{
    int data; 
    struct node * next;
};
void LinkedListTraversal(struct node * ptr){
while(ptr!=NULL){
    printf("Element is: %d\n",ptr->data);
    ptr=ptr->next;
}
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;
    // Allocating the memory 
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    fourth=(struct node *)malloc(sizeof(struct node));
    // Inserting the data
    head->data=5;
    head->next=second;
    second->data=6;
    second->next=third;
    third->data=7;
    third->next=fourth;
    fourth->data=8;
    fourth->next=NULL;
    LinkedListTraversal(head);
    return 0;
    
}