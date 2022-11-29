#include <stdio.h>    //INTERPOLATION SEARCH
int main()            //ARRAY MUST BE SORTED AND ELEMENTS UNIFORMLY DISTRIBUTED
{                     //TIME COMPLEXITY: AVG CASE :O(log2(log2N)) WORST CASE: 0(n)
    int A[10]={10,13,15,26,28,30,50,56,58};
    int l,h,n;
    int key;
    printf("enter the element to be searched:");
    scanf("%d",&key);
    n=9;
    l=0;
    h=n-1;
    int exp;
    while(l<=h)
    {
    exp=l+((h-l)*(key-A[l])/(A[h]-A[l]));
    if(A[exp]==key)
    {
        printf("the element is at index:%d",exp);
        break;
    }
    else
    {
        l=exp+1;
    }
    }
    return 0;
}