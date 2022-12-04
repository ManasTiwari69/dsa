#include<stdio.h>
int main()
{   char ch[20];
    printf("enter your character:");
    scanf("%s",ch);
    //FOR TRAVERSING THROUGH EVERY ELEMENT CHARACTER IN THE STRING
    int i;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            ch[i]+=32;
        }
        else if(ch[i]>='a' && ch[i]<=122)
        {
            ch[i]-=32;
        }
    }
    printf("the coverted string is:%s",ch);
    return 0;
}