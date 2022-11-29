#include <stdio.h>
#include <string.h>
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int power1(int n,int m)
{   if(m==0)
    {
        return 1;
    }
    else if(m%2==0)
    {
        return power1(n*n,m/2);
    }
    else
    {
        return n*power1(n*n,(m-1)/2);
    }
}
int gcd(int n,int m) //using euclids algorithm n>m and m==0 then gcd is n and n%m and m become n
{
    if(m==0)
    {
        return n;
    }
    else if(m>n)
    {
        return gcd(m,n);
    }
    else 
    {
        return gcd(m,n%m);
    }

}
int binarysearch(int A[],int key,int low,int high)
{
    int mid;
    while(low<=high)
    {   mid=(low+high)/2;
        if(A[mid]==key)
        {
            return mid;
        }
        else if(A[mid]>key)
        {
            return binarysearch(A,key,low,mid-1);
        }
        else if(A[mid]<key)
        {
            return binarysearch(A,key,mid+1,high);
        }
    }
    return -1;
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return sum(n-1)+n;
    }
}
void TOH(int n,char s,char m,char d)
{   if(n>0)
{
    TOH(n-1,s,d,m);
    printf("\n %c-->%c",s,d);
    TOH(n-1,m,s,d);
}
}
void reverse(int n)
{   
    if(n<10)
    {
        printf("%d",n);
        return;
    }
    else 
    {   printf("%d",n%10);
        reverse(n/10);
    }
    
}
int ispalindrome(char *str,int l,int h)
{
    if(NULL==str || l<0 || h<0)
    {
        printf("invalid input");
        return 0;
    }
    else if(l>=h)
    {
        return 1;
    }
    else if(str[l]==str[h])
    {
        return ispalindrome(str,l+1,h-1);
    }
}
int main()
{   
    /*printf("enter the two numbers:");
    scanf("%d%d",&n,&m);
    printf("the gcd of the two numbers is:%d",gcd(n,m));
    int A[10]={2,4,9,14,16,100,120,145,165,170};
    int n=10,key;
    printf("enter the number to be found:");
    scanf("%d",&key);
    int l,h;
    l=0;
    h=n-1;
    printf("element is found at :%d",binarysearch(A,key,l,h));
    int n;
    printf("enter the number till which sum is to be found:");
    scanf("%d",&n);
    printf("sum is:%d",sum(n));
    int n;
    printf("enter the no of disks:");
    scanf("%d",&n);
    TOH(n,'S','M','D');
    int n;
    printf("enter the no");
    scanf("%d",&n);
    reverse(n);*/
    char str[]="abba";
    if(ispalindrome(str,0,strlen(str)-1)==1)
    {
        printf("%s is a palindrome",str);
    }
    else
    {
        printf("%s is not a palindrome",str);
    }
    return 0;
}