#include <stdio.h>
#include <stdlib.h>
struct toepl
{
    int *A;
    int n;
};
void set(struct toepl *t,int i,int j,int x)
{
    if(j>=i)
    {
        t->A[j-i]=x;
    }
    else
    {
        t->A[t->n+i-j-1]=x;
    }
}
int get(struct toepl *t,int i,int j)
{
    if(j>=i)
    {
        return t->A[j-i];
    }
    else if(i>j)
    {
        return t->A[t->n+i-j-1];
    }
}
void display(struct toepl t)
{
    for(int i=1;i<=t.n;i++)
    {
        for(int j=1;j<=t.n;j++)
        {   if(j>=i)
        {
            printf("%d ",t.A[j-i]);
        }
        else if(i>j)
        {
            printf("%d ",t.A[t.n+i-j-1]);
        }
        }
        printf("\n");
    }
}
int main()
{   int x;
    struct toepl t;
    printf("enter the ditensions :");
    scanf("%d",&t.n);
    t.A=(int *)malloc((2*t.n-1)*(sizeof(int)));
    for(int i=1;i<=t.n;i++)
    {
        for(int j=1;j<=t.n;j++)
        {
            scanf("%d",&x);
            set(&t,i,j,x);
        }
    }
    printf("\n \n");
    display(t);
    return 0;
}