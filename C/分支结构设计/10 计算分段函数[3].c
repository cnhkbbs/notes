/*本题目要求计算下列分段函数f(x)的值：
        {x   x!=0
y=f(x)={
        {1/x  x=0
输入格式：
输入在一行中给出实数x。
输出格式：
在一行中按“f(x) = result”的格式输出，其中x与result都保留一位小数。*/
#include <stdio.h>
int main()
{
	float x,r;
	scanf("%f",&x);
	if(x!=10)
	printf("f(%.1f) = %.1f",x,x);
	else
	{
	 r=1/x;
	 printf("f(%.1f) = %.1f",x,r);	
	}
	return 0;
}
