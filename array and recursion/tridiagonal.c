#include <stdio.h>
#include <stdlib.h>
struct diagonal
{
    int *A;
    int n;
};
void set(struct diagonal *d,int i,int j,int x)
{
    
        if((i-j)==0)
        {
        d->A[d->n-1+i-1]=x; 
        }
        else if((i-j)==1)
        {
            d->A[i-2]=x;
        }
        else
        {
            d->A[(2*d->n-1)+i-1]=x;
        }
    
}
void display(struct diagonal d)
{
    for(int i=1;i<=d.n;i++)
        {
            for(int j=1;j<=d.n;j++)
            {
                if(abs(i-j)<=1)
                {
                    if(i-j==0)
        {
            printf("%d ", d.A[d.n-1+i-1]); 
        }
        else if(i-j==1)
        {
            printf("%d ", d.A[i-2]); 
        }
        else
        {
            printf("%d ", d.A[(2*d.n-1)+i-1]);
        }
                }
                else
                {
                    printf("0 ");
                }
            }
            printf("\n ");
        }
}
int main()
{
        struct diagonal d;
        printf("enter the dimension:");
        int x;
        scanf("%d",&d.n);
        d.A=(int *)malloc((3*d.n-2)*sizeof(int));
        for(int i=1;i<=d.n;i++)
        {
            for(int j=1;j<=d.n;j++)
            {
                scanf("%d",&x);
                set(&d,i,j,x);
            }
        }
        printf("\n \n");
        display(d);
        return 0;
}