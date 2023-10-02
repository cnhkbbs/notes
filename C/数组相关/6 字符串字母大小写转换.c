/*本题要求编写程序，对一个以“#”结束的字符串，将其小写字母全部转换成大写字母，把大写字母全部转换成小写字母，其他字符不变输出。

输入格式：
输入为一个以“#”结束的字符串（不超过30个字符）。

输出格式：
在一行中输出大小写转换后的结果字符串。*/
#include<stdio.h>
#include<string.h>
#define N 35
int main(void)
{
	int i, j, len = 0;
	char ch,str1[N],str2[N];
	ch = getchar();
	for (i = 0; ch != '#'; i++)
	{
		str1[i] = ch;
		len++;
		ch = getchar();
	}
	for (i = 0; i < len; i++)
 	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')
		{
			 str2[i] = str1[i] + 32;
		}
		else if (str1[i] >= 'a' && str1[i] <= 'z')
		{
			 str2[i] = str1[i] - 32;
		}
		else
		{
		   str2[i] = str1[i];
		}
	}
	for (i = 0; i < len; i++)
	{
		 printf("%c", str2[i]);
	}
	printf("\n");
 
	return 0;
}
