#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10] , i , n;
    printf("enter the size of an array\n");
    scanf("%d",&n);
    printf("enter the %d elements of array",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("here are the  elements of array");
    for(i=0;i<n;i++)
    {
       
        printf("%d\n",a[i]);
    }
}