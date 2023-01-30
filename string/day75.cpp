#include<iostream>
using namespace std;
int main()
{   char A[]="batman";
string temp;
int i;
string temp1;
    for(i=0;A[i]!='\0';i++)
    {
        temp=temp+A[i];
        cout<<temp<<endl;
    }
    printf("\n\n");
    for(int j=i-1;j>=0;j--)
    {
        temp1=A[j]+temp1;
        cout<<temp1<<endl;
    }
    cout<<endl<<endl;
    return 0;
}