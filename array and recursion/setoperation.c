#include <stdio.h>
void unionset(int A[],int m,int B[],int n)
{ int i,j,k;
  int C[10];
  i=j=k=0;
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
      else
      {
        C[k++]=A[i++];  
        j++;
      }
    }
    while (i<m)
    {
        C[k++]=A[i++];
    }
    while (j<n)
    {
        C[k++]=B[j++];
    }
    printf("\n the union set is : {");
    for(int i=0;i<k;i++)
    {
        printf("%d ",C[i]);
    }
    printf("}"); 
}
void intersection(int A[],int m,int B[],int n)
{
    int i,j,k;
  int C[10];
  i=j=k=0;
    while(i<m && j<n)
    {
      if(A[i]<B[j])
      {
        i++;
      }
      if(A[i]>B[j])
      {
        j++;
      }
      else
      {
        C[k++]=A[i++];  
        j++;
      }
    }
    printf("\n the INTERSECTION set is : {");
    for(int i=0;i<k;i++)
    {
        printf("%d ",C[i]);
    }
    printf("}");
}
void difference(int A[],int m,int B[],int n)
{
    int i,j,k;
  int C[10];
  i=j=k=0;
    while(i<m && j<n)
    {
      if(A[i]<B[j])
      {
        C[k++]=A[i++];
      }
      if(A[i]>B[j])
      {
        j++;
      }
      else
      {
        i++;  
        j++;
      }
    }
    while (i<m)
    {
        C[k++]=A[i++];
    }
    printf("\n the A-B difference set is : {");
    for(int i=0;i<k;i++)
    {
        printf("%d ",C[i]);
    }
    printf("}");
}
void symmetricdiiference(int A[],int m,int B[],int n)
{
    int i,j,k;
  int C[10];
  i=j=k=0;
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
      else
      {
        i++;  
        j++;
      }
    }
    printf("\n the symmetric difference set is : {");
    for(int i=0;i<k;i++)
    {
        printf("%d ",C[i]);
    }
    printf("}"); 
}
int main()
{
    int A[5]={1,4,6,9,11};
    printf("\n the array 1 is: {");
    for(int i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }
    printf("}");
    printf("\n the array  2 is: {");
    int B[5]={3,5,7,9,11};
    for(int i=0;i<5;i++)
    {
        printf("%d ",B[i]);
    }
    printf("}");
    unionset(A,5,B,5);
    intersection(A,5,B,5);
    difference(A,5,B,5);
    symmetricdiiference(A,5,B,5);
    return 0;
}