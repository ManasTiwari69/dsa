#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int main()
{   int A[10]={2,5,8,10,12,14,16,19,21,27};
    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0, j=n-1;i<j;i=i+2,j=j-2)
    {
        swap(&A[i],&A[j]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<A[i];
    }
    
    return 0;
}