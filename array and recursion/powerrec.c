#include <stdio.h>
#include<math.h>
int power(int n,int m)
{
  if(m==0)
  {
    return 1;
  }
  else
  {
    return n*pow(n,m-1);
  }
}
//optimised version of the power function
int powero(int n,int m)
{
 if(m==0)
 {
    return 1;
 }
 else if(m%2==0)
 {
    return pow(n*n,m/2);
 }
 else 
 {
    return n*pow(n*n,(m-1)/2);
 }
}
//loop for power function
int powerl(int n,int m)
{ int mul=1;
  for(int i=1;i<=m;i++)
  {
    mul=mul*n;
   
  }
  return mul;
}
int main()
{
    int d,f;
    scanf("%d",&d);
    scanf("%d",&f);
    int r=powerl(d,f);
    printf("%d\n",r);
    return 0;
}
