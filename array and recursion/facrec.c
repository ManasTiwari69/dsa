#include <stdio.h>
int fac(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fac(n-1)*n;
    }
}
int facl(int n)
{
    int mul=1;
    for(int i=1;i<=n;i++)
    {
        mul=mul*i;
    }
    return mul;
}
int main()
{
    int d;
    scanf("%d",&d);
    int r;
    r=facl(d);
    printf("%d",r);
    return 0;
}