//we insert an element and then shift the element if it is greater.
//time complexity: Worst Case(Descending order) comp O(N2) swap O(N2) Best Case(Ascending Order) comp O(N) swap O(1) 
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
void InsertionSort(int A[],int n)
{  int j,x;
   j=x=0;
    for(int i=1;i<n;i++)
    {
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=x;
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
    InsertionSort(A,n);
    display(A,n);
    free(A);
    A=NULL;  //to prevent it from being used
    return 0;
}

//some things to remember about insertion sort
//1.it does not give any useful result in any intermediate pass.
//2.It is adaptive by nature as well as it is stable in nature.