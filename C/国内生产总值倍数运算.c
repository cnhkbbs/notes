#include<stdio.h>
int main()
{
	int a=0;       //使用a作为运行次数判断函数
	float b=0.07,sum=1.00; //定义浮点型变量
	do                     //调用do...wwhile循环
	{
	sum=sum*(1+b);         //算法部分
	a++;	                  //a的自增
	}while(a<=10);
	printf("%f\n",sum);  //输出浮点型变量结果
	return 0;
 } 
