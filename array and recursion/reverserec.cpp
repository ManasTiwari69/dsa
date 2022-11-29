#include<iostream>
using namespace std;
void rev(int n)
{
    if(n<10)
    cout<<n;
    else
    {
      cout<<n%10;
      rev(n/10);
    }
}
int main()
{   int n;
cout<<"enter the number:";
cin>>n;
rev(n);
    return 0;
}