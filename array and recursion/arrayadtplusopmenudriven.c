#include <stdio.h>
#include<stdlib.h>
struct array
{
    int *A;
    int size;
    int length;
};
void display(struct array a)
{   printf("\noutput elements are:");
    for(int i=0;i<a.length;i++)
    {
        printf("%d ",a.A[i]);
    }
}
void append(struct array *a,int x1)
{
    if(a->length<=a->size)
    {
        a->A[a->length++]=x1;
    }
}
void insert(struct array *a,int loc,int x)
{  if(loc>=0 && loc<a->length)
    {for(int i=a->length;i>loc;i--)
    {
    a->A[i]=a->A[i-1];
    }
    a->A[loc]=x;
    }
}
int delete(struct array *a,int loc)
{  if(loc>=0 && loc<a->length)
{
    int x1=a->A[loc];
    for(int i=loc;i<a->length-1;i++)
    {
        a->A[i]=a->A[i+1];
    }
    a->length--;
    return x1; 
}
}
int sum(struct array a)
{
    int total=0;
    for(int i=0;i<a.length;i++)
    {
        total=total+a.A[i];
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
int linearsearch(struct array *a,int key)
{  for(int i=0;i<a->length;i++)
   {
    if(a->A[i]==key)
    {   swap(&(a->A[0]),&(a->A[i]));  //transposition method of improving
        return 0;
    }
   }
    return -1;
}
//using iterative loop
int binarysearch(struct array a,int key)
{
    int low,mid,high;
    low=0;
    high=a.length-1;
    while(low<=high)
    {
    mid=(low+high)/2;
    if(a.A[mid]==key)
    {
        return mid;
    }
    else if(a.A[mid]>key)
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
//using recursion
int binarysearchr(struct array a,int key,int low,int high)
{  int mid;
    mid=(low+high)/2;
    if(low<=high)
    {
    if(a.A[mid]==key)
    {
        return mid;
    }
    else if(a.A[mid]>key)
    {
        return binarysearchr(a,key,low,mid-1);
    }
    else
    {
        return binarysearchr(a,key,mid+1,high);
    }
    }
    return -1;
}
void reverse(struct array *a)
{   int i,j;
    //method 1:using an auixiliary (another) array
    int B[8];
    
    for(i=a->length-1,j=0;i>=0,j<8;i--,j++)
    {
        B[j]=a->A[i];
    } 
    for(int i=0;i<=a->length-1;i++)
    {
        a->A[i]=B[i];
    }
    //method 2:using the same matrix
    
    {
        for(i=0,j=a->length-1;i<j;i++,j--)
        {  
        
        int temp=a->A[j];
        a->A[j]=a->A[i];
        a->A[i]=temp;
        
        }
    }
}
void leftshift(struct array *a)
{
    int temp;
    temp=a->A[0];
    for(int i=0;i<a->length;i++)
    {
        a->A[i]=a->A[i+1];
    }
    a->A[a->length-1]=temp;
}
void rightshift(struct array *a)
{
    int temp;
    temp=a->A[a->length-1];
    for(int i=a->length-1;i>=0;i--)
    {
        a->A[i]=a->A[i-1];
    }
    a->A[0]=temp;

}
void swap1(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void modarray(struct array *a)
{
    int i,j;
    i=0;
    j=a->length-1;
    while(i<j)
    {
        while(a->A[i]<0)
        {
            i++;
        }
        while(a->A[j]>=0)
        {
            j--;
        }
        if(i<j)
        {swap1(&a->A[i],&a->A[j]);}
    }
}
int main()
{   
   //MAKING A MENU DRIVEN PROGRAM FOR AN ARRAY
    struct array a;
    printf("enter the size of the array:");
    scanf("%d",&a.size);
    a.A=(int *)malloc(a.size*(sizeof(int)));
    int ch;
    int x,loc,key,index;
    int total;
    a.length=0;

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
    case 1: a.length++;
    printf("enter your index and the element to be inserted:");
    scanf("%d%d",&index,&x);
    insert(&a,index,x);
    break;
    case 2: printf("enter the location where the element is to be deleted:");
    scanf("%d",&loc);
    delete(&a,loc);
    break;
    case 3: printf("enter the element to be found:");
    scanf("%d",&key);
    printf("%d",binarysearch(a,key));
    break;
    case 4:
    total=sum(a);
    printf("sum is %d",total);
    break;
    case 5: display(a);
    }
}while(ch<6);
return 0;
}