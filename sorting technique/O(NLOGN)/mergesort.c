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
void Merge(int A[],int low,int mid,int high)
{
   int i,j,k;
   int B[100];
   i=low;
   j=mid+1;
   k=low;
   while(i<=mid && j<=high)
   {  if (A[i]<A[j])
   {
    B[k++]=A[i++];
   }
    else
    {
        B[k++]=A[j++];
    }
   }
   for(;i<=mid;i++)
   {
    B[k++]=A[i];
   }
   for(;j<=high;j++)
   {
    B[k++]=A[j];
   }
   for(int i=low;i<=high;i++)
   {
    A[i]=B[i];
   }
}
/*
void MergeSort(int A[],int n)
{   int i,l,h,mid,p;
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
           l=i;
           h=i+p-1;
           mid=(l+h)/2;
           Merge(A,l,mid,h);
        }
        if(n-i>p/2)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            Merge(A,l,mid,n-1);
        }
    }
    if(p/2<n)
    {
      Merge(A,0,p/2-1,n-1);
    }
}*/
void RMergeSort(int A[],int l,int h)
{
    if(l<h)
    {
         int mid=(l+h)/2;
         RMergeSort(A,l,mid);
         RMergeSort(A,mid+1,h);
         Merge(A,l,mid,h);
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
    RMergeSort(A,0,n-1);
    display(A,n);
    free(A);
    A=NULL;  //to prevent it from being used
    return 0;
}