/*本题目要求计算下列分段函数f(x)的值：
      {x^0.5       x>=0
f(x)={
      {(x+1)^2+2x+1/x     x<0
注：可在头文件中包含math.h，并调用sqrt函数求平方根，调用pow函数求幂。
输入格式:
输入在一行中给出实数x。
输出格式:
在一行中按“f(x) = result”的格式输出，其中x与result都保留两位小数。*/
//
#include <stdio.h>
#include <math.h>
int main()
{
 float x,r;
 scanf("%f",&x);
 if(x>=0)
 {
 r=sqrt(x);
 printf("f(%.2f) = %.2f",x,r);
 }
 else
 {
 	r=pow(x+1,2)+2*x+1/x;
 	printf("f(%.2f) = %.2f",x,r);
 }
 return 0;
 } 
