#include <stdio.h>
#include <math.h>
void quadratic(float a,float b,float c)
{
    float d;
    float x1,x2;
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("The roots are imaginary and distinct \n");
    }
    else if(d>0)
    {
        printf("the roots are real and distinct \n");
    }
    else
    {
        printf("the roots are real and equal \n");
    }
    if(d==0)
    {
       x1=-b/(2*a);
       x2=x1;
       printf("roots are %f and %f",x1,x2);
    }
    else if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("roots are %f and %f",x1,x2);
    }
    else if(d<0)
    {
        float r=(-b)/(2*a);
        float f=(sqrt(-d))/(2*a);
        printf("root x1 is %f + %f i ",r,f);
        printf("root x1 is %f - %f i ",r,f);

    }
}
int main()
{
    float a,b,c;
    printf("enter the values of a,b and c :");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    quadratic(a,b,c);
    return 0;
}