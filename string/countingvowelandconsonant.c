#include<stdio.h>
#include<string.h>
int main()
{
    char ch[30];
    printf("enter your character:");
    gets(ch);
    int vcount,ccount;
    vcount=ccount=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'|| ch[i]=='E'|| ch[i]=='I'|| ch[i]=='O'|| ch[i]=='U')
        {
            vcount++;
        }
        else if(ch[i]>=65 && ch[i]<=122)
        {
            ccount++;
        }
    }
    printf("\n the vowels are:%d",vcount);
    printf("\n the consonants are:%d",ccount);
    return 0;
}