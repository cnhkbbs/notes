/*本题要求编写程序，根据输入学生的成绩，统计并输出学生的平均成绩、最高成绩和最低成绩。建议使用动态内存分配来实现。

输入格式：
输入第一行首先给出一个正整数N，表示学生的个数。接下来一行给出N个学生的成绩，数字间以空格分隔。

输出格式：
按照以下格式输出：

average = 平均成绩
max = 最高成绩
min = 最低成绩*/
#include<stdio.h>
int main(void)
{
	int n;
	void numb(int x,float *p,float *t,float *q);
	float max,min,ave,*p=&max,*t=&min,*q=&ave;
	scanf("%d",&n);
	numb(n,p,t,q);
	printf("average = %.2f\nmax = %.2f\nmin = %.2f",*q,*p,*t);
}
void numb(int x,float *p,float *t,float *q)
{
	int i;
	float sum=0,temp;
	*t=1000;
	*p=-100;
	for(i=0;i<x;i++)
	{
		scanf("%f",&temp);
		sum+=temp;
		if(temp<*t)
		{
		*t=temp;
		}
		if(temp>*p)
		{
		*p=temp;
		}
	}
	*q=sum/x;
}
