//the time complexity of the count sort algorithm is O(N) and thus it is very fast.But the tradeoff is that  it takes a very large space as we are creating an array of size of the largest element given in the initial array.
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
void CountSort(int A[],int n)
{
   int max=max1(A,n);
   int *count;
   count=(int *)malloc((max+1)*(sizeof(int)));
   for(int i=0;i<max+1;i++)
   {
    count[i]=0;
   }
   for(int i=0;i<n;i++)
   {
    count[A[i]]++;
   }
   int j=0;
   for(int i=0;i<max+1;i++)
   {  
      if(count[i]>0)
      { while(count[i]>0)
        {
        A[j++]=i;
        count[i]--;
        }
      }
   }

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
    CountSort(A,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    
}