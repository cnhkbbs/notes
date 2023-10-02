/*本题目要求计算下列分段函数f(x)的值：
           {1/x      x!=0
公式y=f(x)={
           {0        x=0
输入格式:
输入在一行中给出实数x。

输出格式:
在一行中按“f(x) = result”的格式输出，其中x与result都保留一位小数。*/
#include <stdio.h>
int main()
{
 float x,r;
 scanf("%f",&x);
 if(x!=0)
 {
 r=1/x;
 printf("f(%.1f) = %.1f",x,r);
 }
 else
 {
 	r=0;
 	printf("f(%.1f) = %.1f",x,r);
 }
 return 0;
 } 
