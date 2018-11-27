#include<stdio.h>
#include<math.h>
int main()
{int a,b,c;
scanf("%d,%d,%d",&a ,&b ,&c);
double drt=b*b-4*a*c;
double x1,x2;
if (drt>=0&&a!=0)
{
x1=(-b+sqrt(drt))/(2*a);
x2=(-b-sqrt(drt))/(2*a);
if (x1>x2){printf("%.2lf %.2lf",x1,x2);}
else if(x2>x1){printf("%.2lf %.2lf",x2,x1);}
else{printf("%.2lf",x1);}
}	
else if (drt<0||a==0&&b==0)
{printf("x");}
else if (a==0&&b!=0)
{x1=-((double)c)/((double)b);
printf("%.2lf",x1);}

}