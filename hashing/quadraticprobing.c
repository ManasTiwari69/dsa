//was used to solve the problem of primary clustering in linear probing
#include<stdio.h>
#define SIZE 10
int hash(int key)
{
    return key%SIZE;
}
int probe(int H[],int key)
{   int index=hash(key);
    int i=0;
    while(H[(index+i*i)%SIZE]!=0)
    {
        i++;
    }
    return (index+i*i)%SIZE;
}
void Insert(int H[],int key)
{
    int index=hash(key);
    if(H[index]!=0)
    {
        index=probe(H,key);
    }
    H[index]=key;
}
int Search(int H[],int key)
{
    int index=hash(key);
    int i=0;
    while(H[(index+i*i)%SIZE]!=key)
    {
        i++;
    }
    return (index+i*i)%SIZE;
}
int main()
{   int HT[10]={0};
    Insert(HT,25);
    Insert(HT,36);
    Insert(HT,42);
    Insert(HT,15);
    Insert(HT,45);
    printf("Index of the key is:%d",Search(HT,45));
    return 0;
}