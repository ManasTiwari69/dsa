#include<iostream>  //program for the concatenation of the string
using namespace std;
int main()
{   char A[100]="bat";
    char B[]="man";
    int i,j;
    for(i=0;A[i]!='\0';i++)
    {
    }
    //FOR FINDING THE LENGTH OF THE ARRAY STORED IN i which ends at the null terminator
    for(j=0;B[j]!='\0';j++)
    {
        A[i]=B[j];
        i++;
    }
    A[i]='\0';
    printf("the concatenated string is:%s",A);
    return 0;
}