//in hashing when usisng modulo hash function take the length  of the hash table as prime so as to reduce collisions.
#include<stdio.h>
#define SIZE 10
int Hash(int key)
{
    return key%SIZE;
}
void Insert(int H[],int key)
{
    int index=Hash(key);
    H[index]=key;
}
int Search(int H[],int key)
{
    int index=Hash(key);
    if(H[index]==key)
    {
        return index;
    }
    else
    {
        return -1;
    }
}
void  Delete(int H[],int key)
{
    int index=Hash(key);
    H[index]=0;
}
int main()
{   int HT[10]={0};
    Insert(HT,25);
    Insert(HT,14);
    Insert(HT,46);
    Insert(HT,57);
    Insert(HT,22);
    Insert(HT,33);
    Insert(HT,100);
    printf("Index of key is:%d",Search(HT,46));
    Delete(HT,46);
    printf("\nIndex of key is:%d",Search(HT,46));
    return 0;
}