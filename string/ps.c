#include <stdio.h>
void print(int A[],int n,int k)
{   int B[20];
    
    for(int i=0,int j=n-1;i<=n-1;i+2,j--)
    {
        B[i]=A[j];
        B[i+1]=A[i];
    }
    for(int i=0;i<n;i++)
    {
        if(B[i]==k)
    {
        printf("the location of the element is:%d",i);
        }
    }

}
int main()
{
    int n,k;
    printf("enter the no of balls ");
    scanf("%d",&n);
    printf("enter the position of the ball: ");
    scanf("%d",&k);
    int A[20];
    for(int i=0;i<n;i++)
    {
        A[i]=i;
    }
    print(A,n,k);
    return 0;
}