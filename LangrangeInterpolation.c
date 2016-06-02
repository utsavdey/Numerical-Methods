#include <stdio.h>
#define f(x,y) ((x)*(x)+(y)*(y))
int main()
{
     float h,s,a[100],x[100],p=1,sum=0,u;
     int i,j,n;
     printf("Enter initial number of values you wan't to input n \n");
     scanf("%d",&n);
     printf("Enter interpolation point \n");
     scanf("%f",&s);
     for(i=0;i<=n;i++)
     {      printf("Enter x and a ");
            scanf("%f %f",&x[i],&a[i]);
     }
      for(i=0;i<=n;i++)
     {   p=1;
         for(j=0;j<=n;j++)
         {  if(i==j) continue;
            p=p*(s-x[j])/(x[i]-x[j]);
         }
         sum=sum+p*a[i];
     }
     printf("%f",sum);

 }
