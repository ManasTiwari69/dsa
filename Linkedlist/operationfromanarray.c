#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
void create(int A[],int n)
{
    
    struct node *newnode,*temp;
    //creation of a linked list
    head=(struct node *)malloc(sizeof(struct node));
    head->data=A[0];
    head->next=NULL;
    temp=head;
    for (int  i = 1; i < n; i++)
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=A[i];
        newnode->next=NULL;
        temp->next=newnode;
        temp=temp->next;
    } 
}
void RDisplay(struct node *p)
{   if(p!=NULL)
    {
    printf("%d ",p->data);
    RDisplay(p->next);  
    }
}
int Count(struct node *p)
{   //iteratively
    /*int count=0;
    while(p!=NULL)
    {
    count++;
    p=p->next;
    }
    return count;*/
    //recursively
    if(p==0)
    {
        return 0;
    }
    else
    {
        return Count(p->next)+1;
    }
}
int Sum(struct node *p)
{   //iteratively
    /*int sum=0;
    while(p!=NULL)
    {
    sum=sum+p->data;
    p=p->next;
    }
    return sum;*/
    //recursively
    if(p==0)
    {
        return 0;
    }
    else
    {
       return Sum(p->next)+p->data;
    }
}
int Max(struct node *p)
{
    /* iteratively
    int max=INT_MIN;
    while(p!=NULL)
    {
        if(max<p->data)
        {
            max=p->data;
            p=p->next;
        }
    }
    return max;*/
    int x=0;
    if(p==NULL)
    {
        return INT_MIN;
    }
    else
    {   
        x=Max(p->next);
        if(x>p->data)
        { 
             return x; 
        }
        else
        {
            return p->data;
        }

    }
}
struct node *Search(struct node *p,int key)
{  //improving search using tail to head approach(it has movement of nodes which is preferred over transposition(movement of data))
    struct node *q;
    while(p!=NULL)
    {   
        if(p->data==key)
        {   
            q->next=p->next;
            p->next=head;
            head=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}
void Insert(int pos,int key)
{   //insert at start
    if(pos==0)
    {
       struct node *temp;
       temp=(struct node *)malloc(sizeof(struct node));
       temp->data=key;
       temp->next=head;
       head=temp;
    }
    //insert in between nodes
    else if(pos>0)
    {  
       struct node *p;
       p=head;
       for (int i = 0; i < pos-1 && p; i++)
       {
        p=p->next;
       }
       struct node *temp;
       temp=(struct node *)malloc(sizeof(struct node));
       temp->data=key;
       temp->next=p->next;
       p->next=temp;  
    }
}
void InsertEnd(int key)
{   struct node *temp,*last;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=key;
temp->next=NULL;
    if(head==NULL)
    {
       head=last=temp;
    }
    else
    {
        last->next=temp;
        last=temp;
    }
}
int CheckSorted(struct node *p)
{
    int x=INT_MIN;
    while(p!=NULL)
    {
        if(x>p->data)
        {
            return 0;
        }
        x=p->data;
        p=p->next;
    }
    return 1;
}
void InsertSorted(int key)
{
    struct node *q,*p;
    q=NULL;
    p=head;
    if(head==NULL)
    {   struct node *temp;
        temp=(struct node *)malloc(sizeof(struct node));
        temp->data=key;
        temp->next=NULL;
        head=temp;
    }
    while(p && key>p->data)
    {
       q=p;
       p=p->next;
    }
    if (p==head)
    {
       struct node *temp;
       temp=(struct node *)malloc(sizeof(struct node));
       temp->data=key;
       temp->next=head;
       head=temp;
    }
    else
    {
       struct node *temp;
       temp=(struct node *)malloc(sizeof(struct node));
       temp->data=key;
       temp->next=q->next;
       q->next=temp;
    } 
}
int DeleteNode(int pos)
{
    struct node *p;
    p=head;
    int x=-1;
    if(pos<0 || pos>Count(p))
    {
        return -1;
    }
    if (pos==0)
    {   
        head=p->next;
        x=p->data;
        free(p);
    }
    else
    {   struct node *q=NULL;
        for (int i = 0; i < pos && p; i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    x=p->data;
    free(p);
    }
    return x;
}
void RemoveDuplicate()
{
    struct node *q,*p;
    q=head;
    p=head->next;
    while(p!=NULL)
    {
        if(q->data!=p->data)
        {
            q=p;
            p=p->next;
        }
        else
        {
            q->next=p->next;
            free(p);
            p=q->next;
        }
    }

}
void ReverseOutplace()
{   //uses extra memory space
    struct node *p=head;
    int i=0;
    int *A;
    A=(int *)malloc(Count(p)*sizeof(int));
    while (p!=NULL)
    {
        A[i++]=p->data;
        p=p->next;
    }
    p=head;
    i--;
    while (p!=NULL)
    {
        p->data=A[i--];
        p=p->next;
    }
}
void ReverseInplace()
{
    //uses the concept of sliding pointers(where three pointers slide)
    struct node *p,*q,*r;
    r=q=NULL;
    p=head;
    while(p!=NULL)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    head=q;
}
void ReverseRec(struct node *q,struct node *p)
{
    if(p!=NULL)
    {
        ReverseRec(p,p->next);
        p->next=q;
    }
    else
    {
        head=q;
    }
}
int main()
{   
    int A[]={2,5,7,9,11,12,13};
    int n=7;
    /*create(A,n);
    RDisplay(head);
    printf("\ncount is:%d",Count(head));
    printf("\nSum is:%d",Sum(head));
    printf("\nMax is:%d",Max(head));
    struct node *temp;
    temp=Search(head,12);
    if(temp)
     printf("\nKey is found:%d",temp->data);
    else
     printf("\nkey not found");
     Insert(4,21);
     printf("\n");
     RDisplay(head);*/
     InsertEnd(10);
     InsertEnd(11);
     InsertEnd(21);
     InsertEnd(34);
     InsertEnd(45);
     printf("\n");
     RDisplay(head);
     if(CheckSorted(head))
     {
        printf("\n it is sorted");
     }
     else
     {
        printf("\n it is not sorted");
     }
     ReverseInplace(NULL,head);
     printf("\n");
     RDisplay(head);
     
    return 0;
}