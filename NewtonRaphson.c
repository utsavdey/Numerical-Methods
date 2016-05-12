#include <stdio.h>
#include <math.h>
#define f(x) ((x)*(x)*(x)+(x)-1)
#define g(x) (3*(x)*(x)+1)
int main(void)
{
     float e,a,b,xn;
     puts("Enter permissible error e ");
     scanf("%f",&e);
     do
     {  puts("Enter a and b");
        scanf("%f %f",&a,&b);
     }while((f(a)*f(b))>0);
     xn=(a+b)/2;
     do
     {
        xn=xn-(f(xn)/g(xn));
     }
     while(fabs(f(xn))>e);

     printf("%f",xn);
}
