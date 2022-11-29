#include <stdio.h>
//unoptimised method
int fab(int n)
{
  if(n<=1)
  {
    return n;
  }
  else
  {
    return fab(n-1)+fab(n-2);;
  }
}
//using loops
int fabl(int n)
{
    int t0=0;
    int t1=1;
    int sum=0;
    for(int i=2;i<=n;i++)
    {
        sum=t0+t1;
        t0=t1;
        t1=sum;
    }
    return sum;
}
//optimised method
int F[6];
int fabo(int n)
{ 
  
  if(n<=1)
  {
    F[n]=n;
    return n;
  }
  else if(fabo(n-1)==-1)
    {
      F[n-1]=fabo(n-1);
    }
    else if(fabo(n-2)==-1)
    {
        F[n-2]=fabo(n-2);
    }
    F[n]=F[n-2]+F[n-1];
    return F[n-2]+F[n-1];
  }
int main()
{  for(int i=0;i<6;i++)
  {
    F[i]=-1;
  } 
  printf("%d",fabo(11));
  return 0;
}