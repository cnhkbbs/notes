/*本题目要求编写程序统计一行字符中单词的个数。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。

输入格式:
输入给出一行字符。

输出格式:
在一行中输出单词个数。*/
#include<stdio.h>
int main()
{
  char a[1000];
  gets(a);
  int l,num=0,i;
  for(i=0;a[i]!='\0';i++);
  l=i;
  for(i=0;i<l;i++)
  {
      if(a[i]!=' ' && a[i+1]==' ')
          num++;
      if(a[i]!=' ' && a[i+1]=='\0')
          num++;
  }
  printf("%d\n",num);
  return 0; 
}
