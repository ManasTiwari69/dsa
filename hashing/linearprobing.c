#include<stdio.h>
#define SIZE 10
int hash(int key)
{
    return key%SIZE;
}
int probe(int H[],int key)
{   int index=hash(key);
    int i=0;
    while(H[(index+i)%SIZE]!=0)
    {
        i++;
    }
    return (index+i)%SIZE;
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
    while(H[(index+i)%SIZE]!=key)
    {
        i++;
    }
    return (index+i)%SIZE;
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

/*drawbacks are:1.primary clustering (all elements are grouped together)
2.imp.can not fill more than half of the hash table i.e. loading factor<=0.5.
3.not recommended for deleting an element as it requires a lot of work like rehashing and moving of non indextial elements.
points:
1.loading factor is in decimal values.
2.follows open addressing sees the next vacant index.
3.flags can be used to denote the deletion of an element(if you want).
*/