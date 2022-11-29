#include <stdio.h>
int main()
{
    int A[10][10];
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
    /*
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {   
            B[j][i]=A[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",B[i][j]);
        if(j==m - 1)
        {
            printf("\n");
        }
        }
    }
    */
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {  if(i!=j && i<j)
        {
            int temp;
            temp=A[i][j];
            A[i][j]=A[j][i];
            A[j][i]=temp;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",A[i][j]);
        if(j==m - 1)
        {
            printf("\n");
        }
        }
    }

return 0;
}