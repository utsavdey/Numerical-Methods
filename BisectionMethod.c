#include <stdio.h>
#include <math.h>
#define f(x) ((x)*(x)-2)

int main(void)
{
     float e,a,b,xn;
     puts("Enter permissible error e ");
     scanf("%f",&e);
     do
     {  puts("Enter a and b");
        scanf("%f %f",&a,&b);
     }while((f(a)*f(b))>0);
     do
     {
        xn=(a+b)/2;
        if((f(xn)*f(a))<0) b=xn;
        else    a=xn;
     }
     while(fabs(a-b)>e);

     printf("%f",xn);
}
