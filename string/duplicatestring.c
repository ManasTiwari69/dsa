#include <stdio.h>
int main()
{
    char A[]="batmanan";
    //using standard comparisons
    /*int i,j,count;
    for(i=0;A[i]!='\0';i++)
    {   count=1;
        if(A[i]!='.')
        {
        for(j=i+1;A[j]!='\0';j++)
        {
            if(A[i]==A[j])
            {
                count++;
                A[j]='.';
            }
            if(count>1)
            {
                printf("\n the no of duplicate of :%c is :%d",A[i],count);
            }
        }
        }
    }*/
    //using hashing
    /*
    int B[26]={0};
    int n=sizeof(B)/sizeof(B[0]);
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        B[A[i]-97]++;
    }
    for(i=0;i<n;i++)
    {
        if(B[i]>1)
        {
            printf("\n the duplicate element is :%c and its count is:%d",97+i,B[i]);
        }
    }*/
    //using bitwise operation
    //we 1.use bit shift left
    //2.bit oring(merging) this mean turning the bit on or off
    //3.bit anding(masking) this means checking whether the bit is on or off.
    long int H=0;
    int x=0;
    for(int i=0;A[i]!='\0';i++)
    {
        x=1;
        x=x << A[i]-97;
        if(x & H>0)
        {
            printf("\n the duplicate element is:%c",A[i]);
            
        }
        else
        {
            H=x|H;
        }
    }
    return 0;
}