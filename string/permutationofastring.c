#include<stdio.h>
#include<string.h>
void perm(char *S,int k)
{   int static A[10]={0};
    char static R[10];
    int i;
    if(S[k]=='\0')
    {   R[k]='\0';
        printf("%s ",R);
    }
    else
    {  for(i=0;S[i]!='\0';i++)
    {
        if(A[i]==0)
        {
            R[k]=S[i];
            A[i]=1;
            perm(S,k+1);
            A[i]=0;
        }
    }
    }
}
void swap(char *s1,char *s2)
{
    char temp;
    temp=*s1;
    *s1=*s2;
    *s2=temp;
}
void permo(char *s,int low,int high)
{   //base condition
    if(low==high)
    {
        printf("%s ",s);
    }
    else
    {   for(int i=low;i<=high;i++)
        { swap(&s[i],&s[low]);
        permo(s,low+1,high);
        swap(&s[i],&s[low]);   //backtracking to avoid mess up and neutralizing changes
        }
    }
}
int main()
{
    char string[]="abc";
    int low=0;
    int high=strlen(string)-1;
    permo(string,low,high);
    return 0;
}