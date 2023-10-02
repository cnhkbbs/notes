/*输入一个字符串，对该字符串进行逆序，输出逆序后的字符串。

输入格式：
输入在一行中给出一个不超过80个字符长度的、以回车结束的非空字符串。

输出格式：
在一行中输出逆序后的字符串。*/
#include <stdio.h>
int main()
{
 char zh[81];
 int i;
 for(i=0;;i++)
 {
 	zh[i]=getchar();
 	if(zh[i]=='\n')
	break; 
 }
 for(i-=1;i!=-1;i--)
 {
 	printf("%c",zh[i]);
	 }	
}
