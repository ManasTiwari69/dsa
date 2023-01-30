#include<iostream>  //lcm of two numbers using recursion
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    else if(b>a)
    {
        return gcd(b,a);
    }
    else 
    {
        return gcd(b,a%b);
    }
}
int lcm1(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{   int a,b;
    cout<<"enter the two numbers:";
    cin>>a>>b;
    /*
    for(lcm=(a>b) ? a : b;lcm<=a*b;lcm=lcm+((a>b) ? a : b))
    {
        if((lcm%a)==0 && (lcm%b)==0)
        {   cout<<lcm;
            break;
        }
    }
    */
    int r=lcm1(a,b);
    cout<<r<<"is the lcm";
    return 0;
}