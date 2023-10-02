/*本题要求编写程序，统计并输出某给定字符在给定字符串中出现的次数。

输入格式：
输入第一行给出一个以回车结束的字符串（少于80个字符）；第二行输入一个字符。

输出格式：
在一行中输出给定字符在给定字符串中出现的次数。*/
#include <stdio.h>
#include<string.h>
int main()
{
	char zh[80],ch;
	int i,count=0;
	gets(zh);
	fflush(stdin);
	scanf("%c",&ch);
	for(i=0;zh[i]!='\0';i++){
		if(zh[i]==ch){
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
