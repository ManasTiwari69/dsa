#include <stdio.h>
double exponent(int x,int n)
{
    static double d=1;
    if(n==0)
    {
        return d;
    }
    else
    {
        d=1+x*d/n;
        return exponent(x,n-1);
    }
}
double exponentloop(int x,int n)
{
    double d=1;
    for(int i=n;i>0;i--)
    {
        d=1+x*d/i;
    }
    return d;
}
int main()
{
    
    printf("%lf \n",exponentloop(1,10));
    return 0;
}