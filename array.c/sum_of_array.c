#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[100],i,N,sum=0;
    printf("Enter the Number of elements of array \n");
    scanf("%d",&N);
    printf("Eneter the elements of array\n");
    for(i=0 ; i<N ; i++){
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<N ; i++){
      sum=sum+arr[i];
    }
    printf("Here is the sum of elements of an array =%d\n",sum);
}