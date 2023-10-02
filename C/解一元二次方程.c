#include <stdio.h>
#include <math.h>
#include <stdlib.h> 
int main()
{
 float a,b,c,x1,x2,d;
 printf("求公式ax^2+bx+c=0的根\n");
 printf("输入方程的第一个系数:a=");
 scanf("%f",&a);
 printf("输入方程的第二个系数:b=");
 scanf("%f",&b);
 printf("输入方程的第三个系数:c=");
 scanf("%f",&c);
 if(a!=0)
  {
   if(b*b-4*a*c>=0)
    {
     d=sqrt(b*b-4*a*c);
     x1=(-b+d)/(2*a);
     x2=(-b-d)/(2*a);
     if(x1<x2) 
      printf("%0.2f %0.2f\n",x2,x1); 
     else
      printf("%0.2f %0.2f\n",x1,x2);
    }
 else
  printf("输入值有问题!\n");
  }
 return 0;
}
