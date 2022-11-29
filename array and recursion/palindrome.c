#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    gets(name);
    printf("%s\n",name);
    int i=0;
    while(name[i]!='\0')
    {
      i++;
    }
    printf("%d",i);
    i--;
    int j=0;
    int flag=0;
    while(j<i)
    {
      if(name[i]!=name[j])
      {
        flag=1;
        break;
      }
      i--;
      j++;
    }
    if(flag==1)
    {
        printf("\nit is not a palindrome");
    }
    else
    {
        printf("\nit is  a palindorme");
    }
    return 0;
}
