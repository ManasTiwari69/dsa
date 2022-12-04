#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100]="my name is alex.";
    int word=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i-1]!=' ' && ch[i]==' ')
        {
            word++;
        }
        if(ch[i]=='.' && ch[i+1]!='\0')
        {
            word++;
        }
    }
    printf("the no of words are:%d",word+1);
    return 0;
}