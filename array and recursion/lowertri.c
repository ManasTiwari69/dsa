#include<stdio.h>
#include<stdlib.h>
struct lowertri
{
    int *A;
    int n;
};
void set(struct lowertri *m,int i,int j,int x)
{
    if(i>=j)
    {
        m->A[i*(i-1)/2+j-1]=x;
    }
}
int get(struct lowertri *m,int i,int j)
{
    if(i>=j)
    {
        return m->A[i*(i-1)/2+j-1];
    }
    else
    {
        return 0;
    }
}
void display(struct lowertri m)
{
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {   if(i>=j)
        {
            printf("%d ",m.A[i*(i-1)/2+j-1]);
        }
        else
        {
            printf("0 ");
        }
        }
        printf("\n");
    }
}
int main()
{   int x;
    struct lowertri m;
    printf("enter the dimensions :");
    scanf("%d",&m.n);
    m.A=(int *)malloc(m.n*(m.n+1)/2*(sizeof(int)));
    for(int i=1;i<=m.n;i++)
    {
        for(int j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    display(m);
    return 0;
}