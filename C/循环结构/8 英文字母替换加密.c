/*本题要求编写程序，将英文字母替换加密。为了防止信息被别人轻易窃取，需要把电码明文通过加密方式变
换成为密文。变换规则是：将明文中的所有英文字母替换为字母表中的后一个字母，同时
将小写字母转换为大写字母，大写字母转换为小写字母。例如，字母a->B、b->C、…、z->A、A->b、B->c、…、Z->a。输入一行字符，
将其中的英文字母按照以上规则转换后输出，其他字符按原样输出。*/
#include<stdio.h>
int main()
{   
    char zh,ch;
    zh=getchar();
    while(zh!='\n')
    {
    	if(zh>='A'&&zh<='Y')
    	ch=zh+33;
    	else if(zh>='b'&&zh<='y')
    	ch=zh-31;
    	else if(zh=='Z')
    	ch=97;
    	else if(zh=='z')
    	ch=65;
    	else if(zh=='a')
    	ch=66;
		else
		ch=zh;	
    	putchar(ch);
    	zh=getchar();
	}
}
