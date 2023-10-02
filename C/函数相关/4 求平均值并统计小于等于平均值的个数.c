/*fun函数的功能是：给定n个实数，输出平均值，并统计小于等于平均值的实数个数。

函数接口定义：
int fun(float x[],int n);
函数fun的功能是求实型数组x中n个实数的平均值并输出平均值，函数返回小于等于平均值的实数个数。其中输出的平均值按“ave=%.2f\n”的格式输出*/
#include<stdio.h>
int fun(float x[],int n);
int main()
{float x[]={23.5,45.67,12.1,6.4,58.9,98.4};
 printf("%d\n",fun(x,6));
 return 0;
}
int fun(float x[],int n)
{
	int i,count=0;
	float sum,ave;
	for(i=0;i<n;i++)
	{
		sum+=x[i];
	}
	ave=sum/n;
	for(i=0;i<n;i++){
		if(x[i]<=ave)
		{
			count++;
		}
	}
	printf("ave=%.2f\n",ave);
	return count;
}
