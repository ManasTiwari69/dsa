#include<stdio.h>
double exponent(int  x,int n)
{
    static double  p=1,f=1;
    double d;
    if(n==0)
    {
        return 1;
    }
    else
    {
      d=exponent(x,n-1);
      p=p*x;
      f=f*n;
      return d+p/f;
    }
}
double exponentloop(int x,int n)
{  double d=1;
   double p=1,f=1;
    for(int i=1;i<=n;i++)
    {
      p=p*x;
      f=f*i;
      d=d+p/f;
    }
    return d;
}
int main()
{
    
    double r=exponentloop(1,10);
    printf("%lf",r);
    return 0;
}