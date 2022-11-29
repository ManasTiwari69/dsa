#include <stdio.h>
#include<stdlib.h>
class array
{   private:
    int *A;
    int size;
    int length;
    void swap(int *c,int *b);
    public:
    //constructor non paramterised
    array()
    {
        
        size=10;
        A=new int[10];
        length=0;
    }
    array(int sz)
    {
        A=new int[sz];
        size=sz;
        length=0;
    }
    ~array()
    {
        delete []A;
    }
    void display();
    void append(int x1);
    void insert(int loc,int x);
    int deleted(int loc);
    int sum();
    int binarysearch(int key);
};

void array::display()
{   printf("\noutput elements are:");
    for(int i=0;i<length;i++)
    {
        printf("%d ",A[i]);
    }
}
void array::append(int x1)
{
    if(length<=size)
    {
        A[length++]=x1;
    }
}
void array::insert(int loc,int x)
{  length++;
    if(loc>=0 && loc<length)
    {for(int i=length;i>loc;i--)
    {
    A[i]=A[i-1];
    }
    A[loc]=x;
    
    }
}
int array :: deleted(int loc)
{  if(loc>=0 && loc<length)
{
    int x1=A[loc];
    for(int i=loc;i<length-1;i++)
    {
        A[i]=A[i+1];
    }
    length--;
    return x1; 
}
}
int array::sum()
{
    int total=0;
    for(int i=0;i<length;i++)
    {
        total=total+A[i];
    }
    return total;
}
void swap(int *c,int *b)
{
    int t;
    t=*c;
    *c=*b;
    *b=t;
}
int array::binarysearch(int key)
{
    int low,mid,high;
    low=0;
    high=length-1;
    while(low<=high)
    {
    mid=(low+high)/2;
    if(A[mid]==key)
    {
        return mid;
    }
    else if(A[mid]>key)
    {
        high=mid-1;
    }
    else
    {
        low=mid+1;
    }
    } 
    return -1;
    
}
int main()
{   
   //MAKING A MENU DRIVEN PROGRAM FOR AN ARRAY
     array *a;
    int sz;
    printf("enter the size of the array:");
    scanf("%d",&sz);
    a= new array[sz];
    int ch;
    int x,loc,key,index;
    int total;

    do
    {
    printf("\n\nMENU\n");
    printf("1.INSERT\n");
    printf("2.DELETE\n");
    printf("3.SEARCH\n"); 
    printf("4.SUM\n");
    printf("5.DISPLAY\n");
    printf("6.EXIT\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1: 
    printf("enter your index and the element to be inserted:");
    scanf("%d%d",&index,&x);
    a->insert(index,x);
    break;
    case 2: printf("enter the location where the element is to be deleted:");
    scanf("%d",&loc);
    a->deleted(loc);
    break;
    case 3: printf("enter the element to be found:");
    scanf("%d",&key);
    printf("%d",a->binarysearch(key));
    break;
    case 4:
    total=a->sum();
    printf("sum is %d",total);
    break;
    case 5: a->display();
    }
}while(ch<6);
return 0;
}