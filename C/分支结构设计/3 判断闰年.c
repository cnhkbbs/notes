/*输入一个年份，判断其是否为闰年，若是闰年输出“yes”的信息，否则输出“no”的信息。

判断闰年的标准：能被4整除但不能被100整除，或者能被400整除的年份是闰年。

输入格式:
直接输入一个4位数年份，没有其它任何附加字符。

输出格式:
直接输出“yes”或“no”，没有其它任何附加字符。*/
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%4==0 && a%100!=0)
	printf("yes");
	else if(a%400==0)
	 printf("yes");
	else
	printf("no");
	return 0;
 } 
