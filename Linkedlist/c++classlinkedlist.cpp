#include<iostream>
using namespace std;
class Node
{
public:
int data;
Node *next;
};
class LinkedList
{
private:
    Node *header;
public:
    LinkedList(){header=NULL;};
    LinkedList(int A[],int n);
    ~LinkedList();

    void Insert(int index,int x);
    void Display();
    int Delete(int index);
    int Length();
};

LinkedList::LinkedList(int A[],int n)
{
    Node *temp,*newnode;
    header=new Node;
    header->data=A[0];
    header->next=NULL;
    temp=header;
    for(int i=1;i<n;i++)
    {
        newnode=new Node;
        newnode->data=A[i];
        newnode->next=NULL;
        temp->next=newnode;
        temp=newnode;
    }
}

LinkedList::~LinkedList()
{
   Node *p;
   p=header;
   while(header!=0)
   { 
    header=header->next;
    delete(p);
    p=header;
   }
}
void LinkedList::Display()
{
    Node *p;
    p=header;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}
int LinkedList::Delete(int index)
{  
    Node *temp;
    temp=header;
    int i,x;
   if(index<0 && index>Length())
   {
    return -1;
   }
   if(index==0)
   {
    header=header->next;
    x=temp->data;
    delete(temp);
   }
   else
   {
    Node *p;
    for( i=0;i<index;i++)
    {
        p=temp;
        temp=temp->next;
    }
    p->next=temp->next;
    x=temp->data;
    delete(temp);
   }
   return x;
}
void LinkedList::Insert(int index,int key)
{  Node *temp;
   temp=new Node;
   temp->data=key;
   if(index==0)
   {
     temp->next=header;
     header=temp;
   }
   else
   {Node *p=header;
     for(int i=0;i<index-1;i++)
     {
        p=p->next;
     }
     temp->next=p->next;
     p->next=temp;
   }
}
int LinkedList::Length()
{
    Node *p;
    p=header;
    int count=0;
    while(p)
    {
         p=p->next;
         count++;
    }
    return count;
}
int main()
{   int A[]={1,3,5,7};
    LinkedList l(A,4);
    l.Display();
    l.Delete(1);
    cout<<endl;
    l.Display();
    return 0;
}