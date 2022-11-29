#include <stdio.h>    //EXPONENTIAL SEARCH
int main()            //ARRAY MUST BE SORTED
{                     //TIME COMPLEXITY: O(logN)
    int A[10]={2,6,9,12,14,19,23,37,42,46};
    int l,h,n,mid;
    int key;
    printf("enter the element to be searched:");
    scanf("%d",&key);
    n=10;
    if(A[0]==key)
    {
        printf("the element is at index:%d",0);
        goto start;
    }
    if(A[n-1]==key)
    {
        printf("the element is at index:%d",n-1);
        goto start;
    }
    int i=1;
    while(i<n && A[i]<key)
    {
        i=i*2;
    }
    l=i/2;
    h=i;
    while(l<=h)
    {   mid=(l+h)/2;
        if(A[mid]==key)
        {
            printf("the element is at index:%d",mid);
            break;
        }
        else if(A[mid]>key)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    start:
    return 0;
}