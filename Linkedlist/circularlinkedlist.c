#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*header=NULL;

void Create(int A[],int n)
{
   struct node *temp,*p;
   header=(struct node *)malloc(sizeof(struct node));
   header->data=A[0];
   header->next=header;
   p=header;
   for (int i = 1; i < n; i++)
   {
    temp=(struct node *)malloc(sizeof(struct node));
    temp->data=A[i];
    p->next=temp;
    p=temp;
    temp->next=header; //*we link the last node with the first header node hence creating a loop(to solve the problem of not able to identify circular ll if the header node is null we tend to use a header node seperately with no data which points to the ll).
   }
}
void Display(struct node *p)
{
   /*do
   {
    printf("%d ",p->data);
    p=p->next;
   } while (p!=header);*/ //* we find the point where they meet again.

   //recursive display
   static int flag=0;
   if(p!=header || flag==0)
   {
     flag=1;
     printf("%d ",p->data);
     Display(p->next);
   }
}
void Insert(int index,int key)
{  struct node *p=header;
   struct node *temp;
   temp=(struct node *)malloc(sizeof(struct node));
   temp->data=key;
   temp->next=NULL;
   if(index<0 || index>Count(header))
   {
    return ;
   }
   if(index==0)
   {
    if(header==NULL)
    {
      header=temp;
      header->next=header;
    }
    else
    {
       while(p->next!=header)
    {
      p=p->next;
    }
    p->next=temp;
    temp->next=header;
    header=temp;
    }
   }
   else
   {
    for(int i=0;i<index-1;i++)
    {
      p=p->next;
    }
    temp->next=p->next;
    p->next=temp;
   }
}
int Count(struct node *p)
{  int count=1;
   while (p->next!=header)
   {
    p=p->next;
    count++;
   }
   return count;
}
int Delete(int index)
{ struct node *temp,*p;
  p=header;
  int x;
  if(index<1 || index>Count(header))
  {
    return -1;
  }
  else
  {
    if(index==1)
    {
      temp=header;
      while (p->next!=header)
      {
        p=p->next;
      }
      if(header==p)
      {
        free(header);
        header=NULL;
      }
      else
      {
      p->next=header->next;
      header=header->next;
      x=temp->data;
      free(temp);
      }
    }
    else
    {
      for (int i = 0; i < index-2; i++)
      {
        p=p->next;
      }
      temp=p->next;
      p->next=temp->next;
      x=temp->data;
      free(temp);
    }
  }
  return x;
}
int main()
{   int A[]={1,3,5,7,8,9};
    Create(A,6);
    Insert(2,1);
    printf("\n");
    Display(header);
    return 0;
}