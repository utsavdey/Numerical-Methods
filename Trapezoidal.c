#include <stdio.h>
#include <math.h>
#define f(x) x*x

int main(void)
{
     float h, sum=.0,a,b , xc;
     puts("Enter h ");
     scanf("%f",&h);
     puts("Enter a and b");
     scanf("%f %f",&a,&b);
     sum=f(a)+f(b);
     xc=xc+h;
     while(xc<b)
     {
        sum=sum+2*f(xc);
        xc=xc+h;

                }
     sum=h*sum/2;

     printf("%f",sum);
}
