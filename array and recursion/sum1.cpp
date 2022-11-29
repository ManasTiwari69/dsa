#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    cin>>x;
    float sum=0;
     float p=1;
    int m=1;
    int sign=1;
    for(int i=1;i<=n;i++)
    {   p=p*x;
    m=m*i;
        sum=sum+(p/m)*sign;
        sign=sign*(-1);

    }
    cout<<"sum is"<<sum;
}