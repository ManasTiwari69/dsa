#include<stdio.h>
void fun(int n)
{
    if(n>0)
    {   
        printf("%d ",n);
        fun(n-1);
    }
}
int main()
{
    int x;
    printf("enter the value of x: \n");
    scanf("%d",&x);
    fun(x);
    return 0;
}