#include <stdio.h>
#include <math.h>
#define f(x) ((x)*(x)*(x)+(x)-1)

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
        xn=((a*f(b))-(b*f(a)))/(f(b)-f(a));
        if((f(xn)*f(a))<0) b=xn;
        else    a=xn;
     }
     while(fabs(f(xn))>e);

     printf("%f",xn);
}
