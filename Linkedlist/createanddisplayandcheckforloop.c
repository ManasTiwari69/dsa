#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*head=NULL;
int CheckLoop(struct node *first)
{   //we are going to use the concept of slow and fast pointer we are gonna increment of value of p by 1 and q by 2 and if they meet it is a loop otherwise it  a linear ll .we can think of it as  a race track which is straight and a circular race track where the cars are eventually gonna meet at different speeds while in a linear track they never do so.
     struct node *p,*q;
     p=q=first;
     do
     {
        p=p->next;
        q=q->next;
        q=q!=NULL?q->next:NULL;
     } while (p && q && p!=q);
     return p==q?1:0;     
}
int main()
{   int choice;
    struct node *newnode,*temp;
    //creation of a linked list
    while(choice)
    {
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=temp=newnode;
    }
    else
    {
        temp->next=newnode;
        temp=temp->next;
    }
    printf("enter your choice:");
    scanf("%d",&choice);
    }
    //linking for loop
    temp->next=head->next;
    //displaying a linked list
    temp=head;
    
    printf("%d",CheckLoop(head));

    return 0;
}