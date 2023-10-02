/*请使用指针的方法编写程序，程序的功能是从键盘输入一个字符串(字符串长度小于100)，删除其中的字母a后输出。例如，输入字符串abcaca，输出bcc。

输入样例:
abcaca
结尾无空行
输出样例:
bcc*/
#include<stdio.h>
int main(void)
{
	void chardelete(char *p,char *q);
	char zh[100],ch[100];
	char *p=zh,*q=ch;
	scanf("%s",zh);
	chardelete(zh,ch);
	printf("%s",ch);
}
void chardelete(char *p,char *q)
{
	int j=0;
	for(int i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!='a')
		{
			*(q+j)=*(p+i);
			j++;
		}
	}
	*(q+j)='\0';
}
