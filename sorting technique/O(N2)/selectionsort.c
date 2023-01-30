//the time complexity in both the best and worst case is: O(N2) and it is not adapative and also not stable in nature.
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
void SelectionSort(int A[],int n)
{  int j,k;
   for(int i=0;i<n-1;i++)
   {
    for(j=k=i;j<n;j++)
    {
        if(A[j]<A[k])
        {
            k=j;
        }
    }
    swap(&A[i],&A[k]);
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
    SelectionSort(A,n);
    display(A,n);
    free(A);
    A=NULL;  //to prevent it from being used
    return 0;
}

//advantages of selection sort
//it performs minimum no of swaps in comparison bubble and insertion sort.
//in kth pass we get useful result: kth smallest elements are arranged in order