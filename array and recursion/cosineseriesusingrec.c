#include<stdio.h>
int fact(int i)
{
    if(i==0)
    {
        return 1;
    }
    else
    {
        return fact(i-1)*i;
    }
}
double pow(double x,int i)
{
    if(i==0)
    {
        return 1;
    }
    else
    {
        return pow(x,i-1)*x;
    }
}
double compute(double x,int i,int sign)
{
    if(i==0)
    { 
      return 1;
    }
    else
    {
        return (compute(x,i-2,sign*(-1))+(sign*(pow(x,i))/(fact(i))) );
    }
}
int main()
{
   int n,sign;
   double x;
   printf("enter the value of n:");
   scanf("%d",&n);
   printf("enter the value of x:");
   scanf("%lf",&x);
   double q=x;
   x=x*(3.14/180);
   if(n%2==0)
   {
    sign=-1;
   }
   else
   {
    sign=1;
   }
   double sum=compute(x,2*n-2,sign);
   printf("cos(%lf)=%lf",q,sum);
   return 0;
}