#include<stdio.h>
int main()
{
    char A[]="batman";
    char B[]="nambta";
    int H[26]={0};
    int n=sizeof(H)/sizeof(H[0]);
    for(int i=0;A[i]!='\0';i++)
    {
        H[A[i]-97]++;
    }
    for(int i=0;B[i]!='\0';i++)
    {
        H[B[i]-97]--;
    }
    for(int i=0;i<n;i++)
    {
        if(H[i]!=0)
        {
            printf("\nthey are not an anagram");
            return 0;
        }
        
    }
    printf("they are an anagram");
    return 0;
}