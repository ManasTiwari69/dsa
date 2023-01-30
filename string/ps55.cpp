#include<iostream>
using namespace std;
int main()
{   int *A;
    int n;
    cout<<"enter the value of n:";
    cin>>n;
    A=new int [n];
     int j=(n/2)-1;
    if(n%2==0)
    {for(int i=0;i<n;i++)
    {  
        if(i<n/2)
        {
            A[i]=2*i+1;
        }
        else
        {
            A[i]=2*j+2;
            j--;
        }
    }
    }
    else
    { j=n/2-1;
      for(int i=0;i<n;i++)
    {  
        if(i<=n/2)
        {
            A[i]=2*i+1;
        }
        else
        {
            A[i]=2*j+2;
            j--;
        }
    }  
    }
    cout<<"the elements are:";
    for(int i=0;i<n;i++)
    {   
        cout<<A[i]<<" ";
    }
    return 0;
}