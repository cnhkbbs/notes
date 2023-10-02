/*数学领域著名的“哥德巴赫猜想”的大致意思是：任何一个大于2的偶数总能表示为两个素数之和。比如：24=5+19，其中5和19都是素数。本实验的任务是设计一个程序，验证5000以内的偶数都可以分解成两个素数之和。

输入格式:
输入在一行中给出一个(2, 5000]范围内的偶数N。

输出格式:
在一行中按照格式“N = p + q”输出N的素数分解，其中p \le≤ q均为素数。又因为这样的分解不唯一（例如24还可以分解为7+17），要求必须输出所有解中p最小的解。*/
#include <stdio.h>
int main(void)
{
	int n,p,q=0,m=0;
	int pernumber(int x);
	scanf("%d",&n);
 	for(p=3;p<n-1;p++){
  		m=pernumber(p);
		if(m==0){
			q=n-p;
			m=pernumber(q);
			if(m==0){
				break;
			}
		}
	}
	if(n==4)
	{
		p=q=2;
	}
	printf("%d = %d + %d",n,p,q);
}
int pernumber(int x)
{
	int i,flag=0;
	for(i=2;i<x;i++)
	{
		if(x%i==0){
			flag=1;
			break;
		}
	}
	return flag;
}
