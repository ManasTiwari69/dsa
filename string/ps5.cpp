#include<iostream>
using namespace std;
void perfect(int n)
{
    int i,j;
    
    for( j=1;j<=n;j++)  //n2 time complexity
    {   int sum=0;
        for(i=1;i<j;i++)
        {if((j%i)==0)
        {
            sum=sum+i;
        }
        }
        if(sum==j)
        {
            cout<<j<<" is a perfect number"<<endl;
        }
    }

}
int main()
{   perfect(100);
    return 0;
}