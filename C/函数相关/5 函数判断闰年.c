/*函数中通过键盘输入年份，调用函数fun判断该年是否为闰年。

函数接口定义：
int fun(int year);
其中 year 是用户传入的参数。 year 的值不超过int的范围。 year是闰年函数须返回 1 ，否则返回0.。*/
#include <stdio.h>
int fun(int year);
int main()
{
int year,np;
scanf("%d",&year); 
np=fun(year);  
if (!np) 
  printf("no\n",year); 
else 
  printf("yes\n",year);
return 0;
 }
int fun(int year)
{
	if((year%400==0)||(year%4==0&&year%100!=0))
	{
		return 1;
	}
	else
	{
		return 0; 
	}
}
