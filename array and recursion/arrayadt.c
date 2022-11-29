#include<stdio.h>
#include<stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void display(struct array a)
{   printf("\noutput elements are:");
   for(int i=0;i<a.length;i++)
    {
        printf("%d ",a.A[i]);
    }
}
int main()
{   int n;
    struct array a;
    printf("enter the size of the array:");
    scanf("%d",&a.size);
    a.A=(int *)malloc(a.size*(sizeof(int)));
    printf("\nenter the length of the array:");
    scanf("%d",&n);
    a.length=n;
    printf("\ninput elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a.A[i]);
    }
    display(a);
    return 0;
}