#include <stdio.h>
#include <math.h>
#define f(x) 1

int main(void)
{
     float h, sum=.0,a,b , xc;
     int n=1,mul=1;
     puts("Enter h ");
     scanf("%f",&h);
     puts("Enter a and b");
     scanf("%f %f",&a,&b);
     sum=f(a)+f(b);
     xc=xc+h;
     while(xc<b)
     {
        mul=n%2==0?2:4;
        sum=sum+mul*f(xc);
        xc=xc+h;
        n++;
                }
     sum=h*sum/3;

     printf("%f",sum);
}
