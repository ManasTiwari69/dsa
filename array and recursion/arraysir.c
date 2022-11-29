#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    int A[10]={3,3,5,9,7,7,10};
    int n=7;
    int h=11;
    int l=3;
    int *B;
    B=(int *)malloc(h*sizeof(int));
    memset(B,0,h*sizeof(int));
    for(int i=0;i<n;i++)
    {
        B[A[i]]++;
    }
    for(int i=l;i<h;i++)
    {
        if(B[i]>1)
        {
            printf("\n the duplicate element is %d and is repeated :%d times",i,B[i]);
        }
    }
    return 0;
}