#include<stdio.h>
#include<string.h>
// reversing without using another string
void reverse(char *str,int h)
{
    int i,j;
    for(i=0,j=h;i<j;i++,j--)
    {
        char temp;
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}
/*BY USING ANOTHER STRING 
char A[]="THE STRING"
char B[of required size];
int i,j;
for(i=0;A[i]!='\0;i++)
{
    THIS GIVES US THE LENGTH OF THE STRING
}
i=i-1; before the null character
for(j=0;i>=0;j++;i--)
{
    B[j]=A[i];
}
B[j]='\0';
hence the characters are copied one by one
*/ 
int main()
{
    char *str;
    printf("enter your password:");
    gets(str);
    int h=strlen(str);
    reverse(str,h-1);
    printf("string is %s",str);
    return 0;
}