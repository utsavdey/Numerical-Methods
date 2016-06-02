#include <stdio.h>
#define f(x,y) ((x)*(x)+(y)*(y))
int main()
{
     float x0,y0,h,y,xf;
     printf("Enter initial value of x0 and y0 \n");
     scanf("%f %f",&x0,&y0);
     printf("Enter h \n");
     scanf("%f",&h);
     printf("Enter at which point of x will we find the y \n");
     scanf("%f",&xf);
     do
     {
       y=y0+h*f(x0,y0);
       y0=y;
       x0=x0+h;
     }
     while(x0<=xf);
     printf("%f",y);

 }
