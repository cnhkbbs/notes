/*从键盘上输入数字星期，然后输出它对应的的英文，如果输入的数据不在1到7的范围，请输出"-1"（不包含引号）。

其对应关系是：

1 Monday

2 Tuesday

3 Wednesday

4 Thursday

5 Friday

6 Saturday

7 Sunday

输入格式:
输入一个整数，代表星期几。

输出格式:
按照题目要求输出。*/
#include <stdio.h>
int main()
{
  char a;
  scanf("%c",&a);
  switch(a)
  {
  	case '1':printf("Monday");break;
	case '2':printf("Tuseday");break;
	case '3':printf("Wednesday");break;
	case '4':printf("Thursday");break;
	case '5':printf("Friday");break;
	case '6':printf("Saturday");break;
	case '7':printf("Sunday");break;
	default :printf("-1");  
   } 
}
