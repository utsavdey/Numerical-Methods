#include <stdio.h>
#define f(x,y) ((x)*(x)+(y)*(y))
int main()
{
     float h,s,a[100][100],x[100][100],p=1,sum=0,u;
     int i,j,n,t=1;
     printf("Enter initial number of values you wan't to input n \n");
     scanf("%d",&n);
     printf("Enter interpolation point \n");
     scanf("%f",&s);
     for(i=0;i<=0;i++)
     {
         for(j=0;j<=n;j++)
         {
            printf("Enter x and a ");
            scanf("%f %f",&x[i][j],&a[i][j]);
         }
     }
     h=-x[0][0]+x[0][1];
     u=(s-x[0][n])/h;
     for(i=1;i<=n;i++)
     {
         for(j=0;j<=n-i;j++)
         {
            a[i][j]=-a[i-1][j]+a[i-1][j+1];
            printf("%f",a[i][j]);
         }
         puts("");
     }
     sum=a[0][n];
     for(j=n-1;j>=0;j--)
         {
            p=p*(u+n-1-j)/(n-j);
            sum=sum+p*a[t++][j];
         }
     printf("%f",sum);
}
