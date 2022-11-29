#include <stdio.h>
int main()
{
    int A[10][10];
    int B[10][10];
    int sub[10][10];
    int m,n;
    printf("enter the number of rows and columns:");
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {   printf("enter the element a%d%d:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {   printf("enter the element b%d%d:",i+1,j+1);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sub[i][j]=A[i][j]-B[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",sub[i][j]);
        if(j==n - 1)
        {
            printf("\n");
        }
        }
        
    }
return 0;
}