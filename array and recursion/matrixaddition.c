#include <stdio.h>
int main()
{
    int A[10][10]={{1,2,3,4},{5,6,7,8}};
    int B[10][10]={{4,5,6,7},{20,11,43,51}};
    int sum[10][10];
    int m,n;
    printf("enter the number of rows and columns:");
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum[i][j]=A[i][j]+B[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",sum[i][j]);
        if(j==n - 1)
        {
            printf("\n \n");
        }
        }
        
    }
return 0;
}