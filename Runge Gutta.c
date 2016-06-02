#include <stdio.h>
#define f(x,y) ((x)*(x)+(y)*(y))
int main()
{
     float x0,y0,h,y,xf,A,B,C,D;
     printf("Enter initial value of x0 and y0 \n");
     scanf("%f %f",&x0,&y0);
     printf("Enter h \n");
     scanf("%f",&h);
     printf("Enter at which point of x will we find the y \n");
     scanf("%f",&xf);
     do
     {
       A=h*f(x0,y0);
       B=h*f(x0+h/2,y0+A/2);
       C=h*f(x0+h/2,y0+B/2);
       D=h*f(x0+h,y0+C);
       y=y0+(A+2*B+2*C+D)/6;
       y0=y;
       x0=x0+h;
     }
     while(x0<=xf);
     printf("%f",y);

 }
