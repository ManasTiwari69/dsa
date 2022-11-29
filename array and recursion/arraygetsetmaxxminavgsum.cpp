#include<iostream>
using namespace std;
int get(int A[],int index,int length)
{
    if(index>=0 && index<length)
    {
        return A[index];
    }
}

int set(int A[],int index,int x,int length)
{
    if(index>=0 && index<length)
    {
        A[index]=x;
    }
}

int max(int A[],int length)
{
    int max;
    max=A[0];
    for(int i=1;i<length;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    return max;
}

int min(int A[],int length)
{
    int min;
    min=A[0];
    for(int i=1;i<length;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    return min;
}

int sum(int A[],int length)
{
    int total=0;
    for(int i=0;i<length;i++)
    {
        total=total+A[i];
    }
    return total;
}

int avg(int A[],int length)
{   int n=length-1;
    int total=0;
    for(int i=0;i<length;i++)
    {
        total=total+A[i];
    }
    return total/n;
}
int main()
{   int A[20]={50,29,3,4,5,6,7,23,11,12};
    cout<<get(A,7,10);
    set(A,5,22,10);
    cout<<endl<<A[5];
    cout<<endl<<max(A,10);
    cout<<endl<<min(A,10);
    cout<<endl<<sum(A,10);
    cout<<endl<<avg(A,10);
    return 0;
}