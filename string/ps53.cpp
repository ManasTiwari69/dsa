#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(b!=0) //euclids algorithm prerequisite 
    {
        return gcd(b,a%b);
    }
    else if(b==0)
    {
        return a;
    }
    else if(b>a)
    {
        return gcd(b,a);
    }
}
int main()
{   int a,b;
    cout<<"enter the values of a and b:";
    cin>>a>>b;;
    int r=gcd(a,b);
    cout<<r<<" is the gcd between "<<a<<" and "<<b;
    return 0;
}