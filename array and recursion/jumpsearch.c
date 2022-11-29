#include <stdio.h>
#include <math.h>      //JUMP SEARCH
int main()            //ARRAY MUST BE SORTED
{                     //TIME COMPLEXITY: O(sqrt(N)) 
    int A[10]={2,6,9,12,14,19,23,37,42,46};
    int start,end,n;
    int key;            //COMBIANTION OF LINEAR SEARCH AND FINDING THE RANGE
    printf("enter the element to be searched:");
    scanf("%d",&key);
    n=10;
    start=0;
    end=sqrt(n);
    while (A[end]<key && start<n)  //FINDING THE RANGE
    {
        start=end;
        end=end+sqrt(n);
        if(end>=n)
        {
            break;
        }
    }
    for(int i=start;i<=end;i++)  //LINEAR SEARCH
    {
        if(A[i]==key)
        {
            printf("the element is at index:%d",i);
            break;
        }
    }
    return 0;
}