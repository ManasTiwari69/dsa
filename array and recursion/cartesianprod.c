#include <stdio.h>
int cartesian(int A[],int B[])
{ printf("AXB:");
  for(int i=0;i<5;i++)
  { 
    for(int j=0;j<3;j++)
    {
        printf("(%d,%d)",A[i],B[j]);
    }
  }
    printf("\n");
    printf("BXA:");
    for(int i=0;i<5;i++)
  { 
    for(int j=0;j<3;j++)
    {
        printf("(%d,%d)",B[j],A[i]);
    }
  }
}
int main()
{
    int A[5]={1,2,3,4,5};
    int B[3]={7,8,9};
    cartesian(A,B);
    return 0;
}