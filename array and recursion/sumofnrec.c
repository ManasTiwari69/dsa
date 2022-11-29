#include <stdio.h>
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }

    else
    {
        return sum(n-1)+n;
    }
}
int suml(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int d;
    scanf("%d",&d);
    int r;
    r=suml(d);
    printf("%d\n",r);
    return 0;
}