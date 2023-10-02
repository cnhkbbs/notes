/*本题要求编写程序计算某年某月某日是该年中的第几天。

输入格式:
输入在一行中按照格式“yyyy/mm/dd”（即“年/月/日”）给出日期。注意：闰年的判别条件是该年年份能被4整除但不能被100整除、或者能被400整除。闰年的2月有29天。

输出格式:
在一行输出日期是该年中的第几天。*/
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  注意本题如果你会用switch语句请用switch语句编写，请尝试将程序精简化，下面的写法是没有用到switch的。
                           时间问题此处就不列出switch写法了
//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <stdio.h>
int main()
{
  int year,day,month,result;
  scanf("%d/%d/%d",&year,&month,&day);
  if(year%400==0||(year%4==0&&year%100!=0))
    if(month==01)
	printf("%d",day);
	else if(month==2)
    {
    result=31+day;
	printf("%d",result);
    }
    else if(month==3)
    {
    result=60+day;
	printf("%d",result);
    }
    else if(month==4)
    {
    result=91+day;
	printf("%d",result);
    }
    else if(month==5)
    {
    result=121+day;
	printf("%d",result);
    }
    else if(month==6)
    {
    result=152+day;
	printf("%d",result);
    }
    else if(month==7)
    {
    result=182+day;
	printf("%d",result);
    }
    else if(month==8)
    {
    result=213+day;
	printf("%d",result);
    }
    else if(month==9)
    {
    result=244+day;
	printf("%d",result);
    }
    else if(month==10)
    {
    result=274+day;
	printf("%d",result);
    }
    else if(month==11)
    {
    result=305+day;
	printf("%d",result);
    }
    else
    {
    result=335+day;
	printf("%d",result);
    }
   else
   if(month==01)
	printf("%d",day);
	else if(month==2)
    {
    result=31+day;
	printf("%d",result);
    }
    else if(month==3)
    {
    result=59+day;
	printf("%d",result);
    }
    else if(month==4)
    {
    result=90+day;
	printf("%d",result);
    }
    else if(month==5)
    {
    result=120+day;
	printf("%d",result);
    }
    else if(month==6)
    {
    result=151+day;
	printf("%d",result);
    }
    else if(month==7)
    {
    result=181+day;
	printf("%d",result);
    }
    else if(month==8)
    {
    result=212+day;
	printf("%d",result);
    }
    else if(month==9)
    {
    result=243+day;
	printf("%d",result);
    }
    else if(month==10)
    {
    result=273+day;
	printf("%d",result);
    }
    else if(month==11)
    {
    result=304+day;
	printf("%d",result);
    }
    else
    {
    result=334+day;
	printf("%d",result);
    }
  return 0;
}
