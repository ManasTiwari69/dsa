#include<iostream>
using namespace std;
int main()
{   char A[]="batmanante";
    int B[26]={0}; //hashing
    for(int i=0;A[i]!='\0';i++)
    {
        B[A[i]-97]++;
    }
    for(int i=0;i<26;i++)
    {   if(B[i]>=1)
        { printf("\n the frequency of %c is %d",i+97,B[i]);}
    }
    return 0;
}