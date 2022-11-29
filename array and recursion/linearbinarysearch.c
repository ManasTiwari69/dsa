#include<stdio.h>
int main()
{
    int A[10]={2,4,7,11,29,32,37};
    int n=7;
    int x;
    printf("enter the element to be search for:");
    scanf("%d",&x);
    //linear search
    /*for(int i=0;i<n;i++)
    {
        if(A[i]==x)        //time complexity 0(n) comparisons are made with scanning through all the elements
        {
            printf("the location of the element is:%d",i);
        }
    }*/

    //binary search
    int l=0;
    int h=n-1;
    int mid=0;
    static int f=0;
    while(l<=h)
    {   mid=(l+h)/2;
        if(A[mid]==x)
        {
            break;
    }
        else if(A[mid]>x)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    printf("element is at :%d",mid);
    return 0;
}