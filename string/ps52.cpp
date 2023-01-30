#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
void strong(int n)
{   
    
    for(int i=1;i<=n;i++)
    {
    int rem=0;
    int result=0;
    int r=i;
    while(r!=0)
    {rem=r%10;
    result=result+fact(rem);
    r=r/10;
    }
    if(result==i)
    {
        printf("\n %d is an strong number",i);
    }
    }
}
int main()
{   int n;
    cin>>n;
    strong(n);
    return 0;
}