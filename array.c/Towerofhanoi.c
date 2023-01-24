#include<stdio.h>
#include<conio.h>
void towerofhanoi(int n, char s, char a, char d){
    if(n==1){
        printf("The disk is moving from the needle %c to %c ",s,d);
    }
    else{
        towerofhanoi(n-1,s,d,a);
        printf("The %d disk is moving from the needle %c to % c",n,s,d);
    }
    towerofhanoi(n-1,a,s,d);
}
int main(){
    int n= 4;
    char src='s';
    char aux='a';
    char dest='d';
    towerofhanoi(n,src,aux,dest);
    return 0;
}