//think of it as throwing a stone in a water the heavy(larger elements ) sink while the lighter elements(bubbles)come upward.
//best case(ascending order) time complexity is O(N)comparisons and O(1) swaps and worst case(descending order) time complexity is O(N2) for both
#include<stdio.h>
#include<stdlib.h>
void input(int A[],int n)
{  printf("enter the elements of the array:\t");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
}
void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void swap(int *x,int *y)
{
    int temp=0;
    temp=*x;
    *x=*y;
    *y=temp;
}
void BubbleSort(int A[],int n)
{   int flag=0;    //introducing flags makes the bubble sort adaptive 
    for(int i=0;i<n-1;i++)
    {   flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}
int main()
{   int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int *A;
    A=(int *)malloc(n*sizeof(int));
    if(A==NULL)
    {
        printf("Memory allocation fails");  //to check whether memory is available or not if not give failed memory allocation.
    }
    input(A,n);
    display(A,n);
    BubbleSort(A,n);
    display(A,n);
    free(A);
    A=NULL;  //to prevent it from being used
    return 0;
}

//in kth pass k largest elements are arranged in order.
