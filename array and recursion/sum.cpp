#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int m=1;
    int sign=1;
    for(int i=1;i<=n;i++)
    {   m=m*i;
        sum=sum+m*sign;
        sign=sign*(-1);
    }
    cout<<"sum is"<<sum;
}