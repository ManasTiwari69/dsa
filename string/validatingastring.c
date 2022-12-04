#include <stdio.h>
#include <string.h>
int validstring(char *str)
{
    if(!(str[0]>='A' && str[0]<='Z' || str[0]>='a' && str[0]<='z'|| str[0]=='_' ))
    {
        return 0;
    }

    for(int i=0;str[i]!='\0';i++)
    {
    if(!(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'|| str[i]=='_' || str[i]>=48 && str[i]<=57))
    {
        return 0;
    }
    }
    return 1;
}
int main()
{
    char *str;
    printf("enter your password:");
    gets(str);
    if(validstring(str))
    {
        printf("valid string");
    }
    else
    {
        printf("invalid string");
    }
    return 0;
}
