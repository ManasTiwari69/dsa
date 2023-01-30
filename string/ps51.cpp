#include<iostream>
using namespace std;
int armstrong(int n)
{   
    int rem;
    int static result=0;
    if(n==0)
    {
        return result;
    }
    rem=n%10;
    result=result+rem*rem*rem;
    armstrong(n/10);
}
int main()
{   int r;
    r=armstrong(371);
    if(r==371)
    {
        cout<<371<<" is armstrong number";
    }
    else
    {
        cout<<371<<" is not an armstrong number";
    }
    return 0;
}