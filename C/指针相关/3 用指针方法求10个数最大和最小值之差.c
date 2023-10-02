/*请使用指针的方法编写程序，程序的功能是从键盘输入10个数，求其最大值和最小值的差。

输入格式:
输入10个整数，每个整数之间用空格分隔。

输出格式:
同样例。*/
#include<stdio.h>
int main(void)
{
	int n,i;
	void number(int *p);
	int a[10],*p=a;
	 for(i=0;i<10;i++){
	 	scanf("%d",&a[i]);
	 }
	number(a);
    printf("difference value = %d",*p);
}
void number(int *p)
{
	int max=-100,min=100;
	for(int i=0;i<10;i++){
		if(max<*(p+i)){
			max=*(p+i);
		}
		if(min>*(p+i))
		{
			min=*(p+i);
		}
	}
	*p=max-min;
}  
