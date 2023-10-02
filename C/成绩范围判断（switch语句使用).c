#include<stdio.h>
int main()
{
	char grade;    //定义字符型变量
	scanf("%c",&grade);     //键入成绩等级字符A，B，C
	printf("你的成绩：");
	switch(grade)    //调用switch语句
	{
		case 'A': printf("85~100\n");break;     //当键入值为“A”时输出成绩范围为“85到100”
		case 'B': printf("70~84\n");break;
		case 'C': printf("60~69\n");break;
		case 'D': printf("<60\n");break;
		default: printf("数据错误！\n");    //当键入值为其他字符时，返回错误
	 }
	 return 0; 
 } 