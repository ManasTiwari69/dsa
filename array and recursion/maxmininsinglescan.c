#include <stdio.h>
int main()
{
    int A[10]={4,3,7,2,11,22,21,45,63,12};
    int n=10;
    int max,min;
    max=min=A[0];
    for(int i=0;i<n;i++)
    {
        while(max<A[i])
        {
            max=A[i];
        }
        while(min>A[i])
        {
            min=A[i];
        }
    }
    printf("max=%d and min=%d ",max,min);
    return 0;
}