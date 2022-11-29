#include <stdio.h>    //TERNARY SEARCH
int main()            //ARRAY MUST BE SORTED
{                     //TIME COMPLEXITY: O(log3N)
    int A[10]={2,6,9,12,14,19,23,37,42,46};
    int l,h,n;
    int key;
    printf("enter the element to be searched:");
    scanf("%d",&key);
    n=10;
    l=0;
    h=n-1;
    int mid1,mid2;
    while(l<=h)
    {
        mid1=l+(h-l)/3;
        mid2=h-(h-l)/3;
        if(A[mid1]==key)
        {
            printf("the element is at:%d",mid1);
        }
        if(A[mid2]==key)
        {
            printf("the element is at:%d",mid2);
        }
        if(A[mid1]>key)
        {
            h=mid1-1;
        }
        else if(A[mid2]<key)
        {
            l=mid2+1;
        }
        else
        {
            l=mid1+1;
            h=mid2-1;
        }
    }
    return 0;
}