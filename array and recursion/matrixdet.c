#include <stdio.h>
int main()
{
    int A[10][10];
    int B[10][10];
    double det;
    int n;
    printf("enter the value of rows and column:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   printf("enter the element a%d%d:",i+1,j+1);
            scanf("%d",&A[i][j]);
        }
}
if(n==2)
{
    det=A[0][0]*A[1][1]-A[1][0]*A[0][1];
    printf("the value of the determinant is:%lf",det);
}
if(n==3)
{
    det=A[0][0]*(A[1][1]*A[2][2]-A[2][1]*A[1][2])-A[0][1]*(A[1][0]*A[2][2]-A[2][0]*A[1][2])+A[0][2]*(A[1][0]*A[1][1]-A[2][0]*A[1][1]);
    printf("the value of the determinant is:%lf",det);
}
    return 0;


}