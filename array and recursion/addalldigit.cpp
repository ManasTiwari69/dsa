#include<iostream>
using namespace std;
int add(int n)
{   static int sum=0;
     if ( n>0 || sum >9)
     {  if(n==0)
     {
        n=sum;
        sum=0;
     }
        sum+=n%10;
      add(n/10);
     }
    return sum;
}
int main()
{   int n;
    cout<<"enter the digit:";
    cin>>n;
    cout<<add(n);
    return 0;
}