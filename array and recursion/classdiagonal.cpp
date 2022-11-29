#include<iostream>
using namespace std;
class diagonal
{   private:
    int *A;
    int n;
    public:
    diagonal(int n)
    {
        this->n=n;
        A=new int[n];
    }
    void setq(int i,int j,int x);
    int get(int i,int j);
    void display();
    ~diagonal()
    {
        delete[] A;
    }
};
void diagonal::setq(int i,int j,int x)
{
    
    if(i==j)
    {
        A[i-1]=x;
    }
}
int diagonal :: get(int i,int j)
{
    if(i==j)
    {
        return A[i-1];
    }
    else
    {
        return 0;
    }
}
void diagonal :: display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {   if(i==j)
        {
            printf("%d ",A[i]);
        }
        else
        {
            printf("0 ");
        }
        }
        printf("\n");
    }
}
int main()
{   diagonal m(5);
    m.setq(1,1,24);
    m.setq(2,2,36);
    m.setq(3,3,42);
    m.setq(4,4,57);
    m.setq(5,5,62);
    printf("the element at this index is:%d \n",m.get(2,2));
    m.display();
    return 0;
}