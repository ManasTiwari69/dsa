#include<iostream>
using namespace std;
int main()
{ 
    int a,b,c;
    cout<<"enter the values of the three numbers:";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {cout<<a<<"is the largest"<<endl;
        }
        else 
        {cout<<c <<"is the largest"<<endl;}
    }
    else if(b>a)
    {
        if(b>c)
        {cout<<b<<"is the largest";}
        else
        {cout<<c<<"is the largest";}
    }
}