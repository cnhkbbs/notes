/*本题要求编写程序将一个百分制成绩转换为五分制成绩。转换规则：

大于等于90分为A；
小于90且大于等于80为B；
小于80且大于等于70为C；
小于70且大于等于60为D；
小于60为E。
输入格式:
输入在一行中给出一个整数的百分制成绩。

输出格式:
在一行中输出对应的五分制成绩。*/
#include <stdio.h>
int main()
{
  int a;
  scanf("%d",&a);
  if(a>=90)
  printf("A");
  else if(a<90&&a>=80)
  printf("B");
  else if(a<80&&a>=70)
  printf("C");
  else if(a<70&&a>=60)
  printf("D");
  else
  printf("E");
  return 0;
}
