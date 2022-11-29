#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    //MISSING ELEMENT IN AN SORTED ARRAY 1(starting from 1 natural numbers)
    /*int A[10]={1,2,3,4,5,7,8,9,10};
    int n=10;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+A[i];
    }
    int total=0;
    total=n*(n+1)/2;
    printf("the missing element is:%d",total-sum);*/
    //MISSING ELEMENT IN AN SORTED ARRAY 2(STARTING FROM ANY NO)
    /*int A[10]={6,7,8,9,10,12,13,14,15,16};
    int l,h,n;
    l=6;
    h=16;
    n=10;
    int diff=0;
    diff=l-0;
    for(int i=0;i<n;i++)
    {
     if((A[i]-i)!=diff)
     {
      printf("the missing element is:%d",i+diff);
      diff++;
     }
    }*/
    //finding multiple missing elements in an sorted array
   /* int A[10]={6,7,8,12,14,15,16};
    int l,h,n;
    l=6;   
    h=16;
    n=7;
    int diff=0;
    diff=l-0;
    for(int i=0;i<n;i++)
    {
     if((A[i]-i)!=diff)
     {
      while(diff<A[i]-i)
      {printf("\nthe missing element is:%d",i+diff);
      diff++;
      }
     }
    
}*/
//finding missing element in an unsorted array
/*int A[10]={4,2,3,8};
int n=5;
int h=8;
int l=2;
int *B;
B=(int *)malloc(h*(sizeof(int)));
memset(B, 0, h*sizeof(int));
for(int i=0;i<n;i++)
{
    B[A[i]]=1;
}
for(int i=l;i<h;i++)
{
    if(B[i]==0)
    {
        printf("\nthe missing element is:%d",i);
    }
}*/
/*finding dupicates and count in sorted array
for(int i=0;i<n-1;i++)
{
{   
    if(A[i]==A[i+1])
    {int j=i;
    while(A[j]==A[i])
    {  j++;
    } 
    {   
        printf("\nthe duplicate number and count is:%d %d",A[i],j-i);
        i=j-1;
    }
    
}
}
}
*/
//finding duplicates and count using hashing
/*int A[12]={1,2,2,3,4,5,6,7,8,8,8,10};
int n=12;
int h=10;
int *B;
B=(int *)malloc(h*(sizeof(int)));
memset(B,0,h*sizeof(int));
for(int i=0;i<n;i++)
{
    B[A[i]]++;
}
for(int i=0;i<h;i++)
{
if(B[i]>1)
{
    printf("\n the duplicate is %d and the count is:%d",i,B[i]);
}
}*/
// takes longer time complexity of O(n^2) for an unsorted array
//int A[10]={4,2,6,7,6,8,9,8,8,8};
//int n=10;
/*
for(int i=0;i<n-1;i++)
{   int count=1;
    for(int j=i+1;j<n;j++)
    {
        if(A[i]==A[j])
        {
            count++;
            A[j]=-1;
        }
        
    }
    if(count>1 && A[i]!=-1)
        {
        printf("\nthe duplicate is %d and the count is %d",A[i],count);
        }
}*/
//takes linear time complexity of O(n) for an unsorted array
int A[10]={4,2,6,7,6,8,9,8,8,8};
int n=10;
int h=9;
int *B;
B=(int *)malloc(h*(sizeof(int)));
memset(B, 0, h*sizeof(int));
for(int i=0;i<n;i++)
{
   B[A[i]]++;
}
for(int i=1;i<=8;i++)
{
    if(B[i]>1)
    {
        printf("\n the duplicates and the count are:%d %d",i,B[i]);
    }
}
return 0;

}