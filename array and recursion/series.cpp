#include<iostream>
using namespace std;
int factorial(int n1,int n2)
{  int m1=1;
    for(int i=1;i<=n2;i++)
    {
        
        m1=m1*n1;
    }
   return m1;
}
int main()
{   int n,b;
    cout<<"put the value of n";
    cin>>n;
    cout<<"enter b";
    cin>>b;
    int s=factorial(n,b);
    cout<<"a to the power b is"<<s;
    return 0;
}