#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int loc,x,n;
    cout<<"enter the no of elements in the array"<<endl;
    cin>>n;
    cout<<"enter the location for swapping:"<<endl;
    cin>>loc;
    cout<<"enter the element to be swapped :"<<endl;
    cin>>x;
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    for(int i=0;i<n;i++)
    {cout<<arr[i]<<endl;
    }
    n++;
    for(int i=n-1;i>=loc;i--)
    {arr[i]=arr[i-1];}
    arr[loc-1]=x;
    for(int i=0;i<n;i++)
    {cout<<"the modified array is"<<arr[i]<<" ";}
    return 0;
}


