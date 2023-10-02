/*本题要求编写程序，先将输入的一系列整数中的最小值与第一个数交换，然后将最大值与最后一个数交换，最后输出交换后的序列。

注意：题目保证最大和最小值都是唯一的。

输入格式：
输入在第一行中给出一个正整数N（≤10），第二行给出N个整数，数字间以空格分隔。

输出格式：
在一行中顺序输出交换后的序列，每个整数后跟一个空格。*/
#include <stdio.h>
int main()
{
	int n,i,a[10],c,d,min,max,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]<=min)
		  {
		  	min=a[i];
		  	j=i;
		  }
	}
	c=a[0];
	a[0]=min;
	a[j]=c;
	for(i=0;i<n;i++)
	{
		if(a[i]>=max)
		  {
		  	max=a[i];
		  	j=i;
		  }
	}
	d=max;
	a[j]=a[n-1];
	a[n-1]=d;
	for(i=0;i<n;i++)
printf("%d ",a[i]);
}
