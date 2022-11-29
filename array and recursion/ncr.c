#include<stdio.h>
int fact(int n)
{
    if(n==0)
     return 1;
    return fact(n-1)*n; 
}
//this is without using recursion and direct returning
int C(int n,int r)
{
    int t1,t2,t3;
    t1=fact(n);
    t2=fact(r);
    t3=fact(n-r);
    return t1/(t2*t3);
}
//this is by using recursion and by using the principle of pascals triangle
int Co(int n,int r)
{
    if(r==0 || n==r)
    {
        return 1;
    }
    else
    {
        return Co(n-1,r-1)+Co(n-1,r);
    }
}
int main()
{   
    printf("%d \n",Co(7,2));
    return 0;
}
