//the time complexity is taken as nlogn 
//the gaps can also be taken as prime numbers eg. 11 then 7 then 5 then 3 then 2 so on therefore the time complexity comes out as O(N3/2) and also O(N5/3). 
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
void ShellSort(int A[],int n)
{  
    int i,j,gap;
    for(gap=n/2;gap>=1;gap=gap/2)
    {
        for(i=gap;i<n;i++)
        {
            j=i-gap;
            while(j>=0 && A[j]>A[j+gap])
            {
                  swap(&A[j],&A[j+gap]);
                  j=j-gap;
            }
        }
    }
}
//OR THIS METHOD CAN BE FOLLOWED
/*
void ShellSort(int A[],int n)
{  
    int i,j,gap,temp;
    for(gap=n/2;gap>=1;gap=gap/2)
    {
        for(i=gap;i<n;i++)
        {   temp=A[i]; //we introduce  a temp variable
            j=i-gap;
            while(j>=0 && A[j]>temp)
            {
                  A[j+gap]=A[j];    //first we change its value with the preceding value if it is less
                  j=j-gap;  // then we go to the index before it
            } //now here when it comes out its value has become more less
            A[j+gap]=temp;
        }
    }
}*/
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
    ShellSort(A,n);
    display(A,n);
    free(A);
    A=NULL;  //to prevent it from being used
    return 0;
}
//it is based on the concept of insertion sort that if a array is not sorted due to a few elements then sorting thrm will make the whole array sorted.
//as it follows the idea of insertion sort it is both stable and adaptive in nature.
//it is an inplace sorting as it does not take any extra memory.