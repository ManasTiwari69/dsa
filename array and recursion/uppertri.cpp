#include <iostream>
using namespace std;
class uppertri
{
    private:
    int *A;
    int n;
    public:
    uppertri()
    {
        n=2;
        A=new int[2*(2+1)/2];
    }
    uppertri(int n)
    {
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    ~uppertri()
    {
        delete []A;
    }
    void set(int i,int j,int x);
    int get(int i,int j);
    void display();
    int getdimension()
    {
        return n;
    }
};
void uppertri :: set(int i,int j,int x)
{
    if(j>=i)
    {
        A[j*(j-1)/2+i-1]=x;
    }
}
int uppertri :: get(int i,int j)
{
    if(j>=i)
    {
        return A[j*(j-1)/2+i-1];
    }
    else
    {
        return 0;
    }
}
void uppertri :: display()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {   if(j>=i)
            {
                printf("%d ",A[j*(j-1)/2+i-1]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n ");
    }
}
int main()
{   int x;
int n;
    
    printf("enter the dimensions");
    scanf("%d",&n);
    uppertri u(n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {   scanf("%d",&x);
            u.set(i,j,x);
        }
    }
    printf("%d",u.get(2,2));
    printf("\n \n");
    u.display();
    return 0;
}
