/*从键盘输入一个年份year和月份month，输出该月有多少天(考虑闰年)。 提示：如果年份能被400整除，则它是闰年；如果能被4整除，而不能被100整除，则也是闰年，否则不是闰年。

输入格式:
输入任意符合范围（1月~12月）的月份和（1900年~9999年）年份，且两个值之间空格分隔。*/
#include <stdio.h>
int main()
{
    int yyyy,mm;
    scanf("%d %d",&yyyy,&mm);
    if(yyyy%400==0||(yyyy%4==0&&yyyy%100!=0))
      if(mm==1||mm==3||mm==5)
         printf("year = %d month = %d days=31",yyyy,mm);
       else if(mm==7||mm==8||mm==10)
          printf("year = %d month = %d days=31",yyyy,mm);
       else if(mm==12)
           printf("year = %d month = %d days=31",yyyy,mm);
       else if(mm==2)
         printf("year = %d month = %d days=29",yyyy,mm);
       else
        printf("year = %d month = %d days=30",yyyy,mm);
    else
    if(mm==1||mm==3||mm==5)
         printf("year = %d month = %d days=31",yyyy,mm);
    else if(mm==7||mm==8||mm==10)
        printf("year = %d month = %d days=31",yyyy,mm);
    else if(mm==12)
           printf("year = %d month = %d days=31",yyyy,mm);
    else if(mm==2)
         printf("year = %d month = %d days=28",yyyy,mm);
    else
        printf("year = %d month = %d days=30",yyyy,mm);
    return 0;
}
