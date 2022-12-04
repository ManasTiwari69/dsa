#include <stdio.h>
int main()
{
    char A[]="batman";
    char B[]="Batman";
    int i,j;
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
    {   if(A[i]>=65 && A[i]<=90)
        {
            A[i]=A[i]+32;
        }
        if(B[i]>=65 && B[j]<=90)
        {
            B[j]=B[j]+32;
        }
        if(A[i]!=B[j])
        {
            goto start;
        }
    }
    start:
    if(A[i]==B[j])
    {
        printf("\n they are along the same place in dictionary");
    }
    else if(A[i]>B[j])
    {
        printf("\n STRING A is afterwards  in dictionary");
    }
    else
    {
        printf("\n STRING A is before in dictionary");
    }
    return 0;
}