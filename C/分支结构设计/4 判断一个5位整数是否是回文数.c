/*回文数是指正读和反读都一样的数。例如：12321、55455、35553等都是回文数。请编写一个程序，从键盘上读取一个包含5位数字的长整数，并判断它是否是回文数。

输入格式:
输入一个整数。

输出格式:
先将输入数据输出，再输出是否是回文，若是回文输出“yes”，否则输出“no"，中间用一个空格分隔。*/
#include <stdio.h>
int main()
{
int a,b,c,d,e;
scanf("%d",&a);
 b=a%10;
 c=a/10000;
 d=(a%100-a%10)/10;
 e=a/1000%10;
 if (b==c&&d==e)
 printf("%d yes",a);
 else
 printf("%d no",a);
 return 0;
 } 
