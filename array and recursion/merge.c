#include<stdio.h>
void mergearray(int A[],int m,int B[],int n)
{
  int C[10];
  int i=0;
  int j=0;
  int k=0;
  while(i<m && j<n)
  {
    if(A[i]<B[j])
    {
        C[k++]=A[i++];
    }
    if(A[i]>B[j])
    {
        C[k++]=B[j++];
    }
  }
  while(i<m)
  {
    C[k++]=A[i++];
  }
  while(j<n)
  {
    C[k++]=B[j++];
  }
  for(int k=0;k<m+n;k++)
  {
    printf("%d ",C[k]);
  }
}
int main()
{
    int A[5]={2,4,6,8,10};
    int B[5]={3,5,7,9,12};
    mergearray(A,5,B,5);
    return 0;
}