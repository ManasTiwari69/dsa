#include<stdio.h>
#define SIZE 10
#define R 7
int hash1(int key)
{
    return key%SIZE;
}
int hash2(int key)
{
     return R-key%R;
}
int doublehash(int H[],int key)
{   int index1=hash1(key);
    int index2=hash2(key);
    int i=0;
    while(H[(index1+i*index2)%SIZE]!=0)
    {
        i++;
    }
    return (index1+i*index2)%SIZE;
}
void Insert(int H[],int key)
{
    int index1=hash1(key);
    if(H[index1]!=0)
    {
        index1=doublehash(H,key);
    }
    H[index1]=key;
}
int Search(int H[],int key)
{
    int index1=hash1(key);
    int index2=hash2(key);
    int i=0;
    while(H[(index1+i*index2)%SIZE]!=key)
    {
        i++;
    }
    return (index1+i*index2)%SIZE;
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