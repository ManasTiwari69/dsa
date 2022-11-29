#include<stdio.h>
void toh(int n,char A,char B,char C)
{   if(n>0)
    {
    toh(n-1,A,C,B);
    printf("it is moved from %c to %c \n",A,C);
    toh(n-1,B,A,C);
    }
}
int main()
{
    toh(3,'A','B','C');
    return 0;
}