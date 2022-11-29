#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,x,n,ch;
    printf("enter the dimensions:");   //implementing diagonal using create and functions
    scanf("%d",&n);
    int *A;
    A=(int *)malloc(n*(sizeof(int)));
    do
    {   printf("\nMENU");
        printf("\n1.CREATE\n");
        printf("2.GET\n");
        printf("3.SET\n");
        printf("4.DISPLAY\n");
        printf("5.EXIT");
        printf("\nenter the operation you want to do:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: printf("enter the elements:");  //CREATE
        for(int i=1;i<=n;i++)
        {     scanf("%d",&A[i-1]);
            }
            break;
        case 2:printf("get the element from:");  //GET
        scanf("%d%d",&i,&j);
        if(i==j)
        {
        printf("the element is at:%d",A[i-1]);
        }
        else
        {
            printf("0");
        }
        break;
        case 3: printf("set the element at index and its value:"); //SET
        scanf("%d%d%d",&i,&j,&x);
        if(i==j)
        {
            A[i-1]=x;
        }
        break;
        case 4: 
        for (int i = 1; i <=n; i++)       //display
        {
            for(int j=1; j<=n;j++)
            {   if(i==j)
            {
                printf("%d ",A[i-1]);
            }
            else
            {
                printf("0 ");
            }
            }
            printf("\n");
        }
        
    } 
    }while (ch<5);
}

