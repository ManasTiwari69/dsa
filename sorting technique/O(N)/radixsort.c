#include<stdio.h>
#include<stdlib.h>
int max1(int A[],int n)
{
    int max=A[0];
    for (int i = 0; i < n; i++)
    {
        if(max<A[i])
        {
            max=A[i];
        }
    }
    return max;
    
}
void Procedure(int A[],int B[],int n,int d)
{
    int count[10]={0};
    int k=10;
    for (int i = 0; i < n; i++)
    {
        count[(A[i]/d)%10]++;
    }
    for (int i = 1; i <k; i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
        B[--count[(A[i]/d)%10]]=A[i];
    }
    for(int i=0;i<n;i++)
    {
        A[i]=B[i];
    } 
   
}
void RadixSort(int A[],int n)
{
   int max=max1(A,n);
   int *B;
   B=(int *)malloc(n*sizeof(int));
   for(int d=1;max/d>0;d*=10)
   {
    Procedure(A,B,n,d);
   }
   free(B);
}
int main()
{
    int A[10]={19,12,4,8,7,16,11,6,13,15};
    int n=10;
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    RadixSort(A,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    
}