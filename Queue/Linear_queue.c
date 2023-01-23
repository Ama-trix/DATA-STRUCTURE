#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define max 10
void insert();
 void delete();
 void display();
int array[max];
int front =-1;
int rear=-1;
void main(){
    int choice;
    do{
    printf("+++++++++++++++MENU++++++++++++++\n");
    printf("Enter your choice for the following operation\n");
    printf("1 For insertion\n2 For deletion\n3 For display\n4 exit");
    scanf("%d",&choice);
        switch (choice)
        {
        case 1: insert();
            break;
        case 2:delete();
            break;
        case 3:display();
            break;
        case 4: exit(0);
        default:printf("You have entered the wrong choice\n");
            break;
        }
    }
    while(1);
}
void insert(){
    int data;
    printf("Enter the data\n");
    scanf("%d",&data);
    if(rear==max-1){
        printf("Queue is overflow\n");
    }
    else{
        if(front==-1&&rear==-1){
            front=rear=0;
            printf("Inserting an element in queue\n");
            array[rear]=data;
        }
            else{
            rear=rear+1;
            array[rear]=data;
            }
        printf("Data is inserted\n");

        }

    }
    
void delete(){
    int val;
    if(front==-1||front>rear){
        printf("Queue is underflow\n");
    }
    else{
        val=array[front];
        front++;
        if(front>rear)
        front=rear=-1;

        printf("Deletion is successfull\n");
    }
}
void display(){
    int i;
    if(front==-1){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is\n");
        for(i=front+1;i<=rear;i++){
            printf("%d",array[i]);
        }
    }
}
