#include <stdio.h>
int main()
{
    int A[10][10];
    int B[10][10];
    int mul[10][10]={0};
    int m,n,p,q;
    printf("enter the number of rows and columns of array A:");
    scanf("%d %d",&m,&n);
    printf("enter the number of rows and columns of array B:");
    scanf("%d %d",&p,&q);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {   printf("enter the element a%d%d:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {   printf("enter the element b%d%d:",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    if(n==p)
    {
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        { 
            for(int k=0;k<p;k++)
            {
                mul[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            printf("%d ",mul[i][j]);
        if(j==q - 1)
        {
            printf("\n");
        }
        }
        
    }
    }
    else
    {
        printf("multiplication is not possible");
    }
return 0;
}