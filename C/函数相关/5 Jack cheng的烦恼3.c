/*Jack cheng在书上遇到一道编程题，可他不会做，没办法，他只好向你求助。题目要求判断给出的一个数是否为“真素数”。
真素数的定义为：自身为素数，且自身各位数之和仍为素数。例如，11为素数，1+1=2也为素数，所以11为真素数。

输入格式:
输入在一行中给出需要判断的数n.

输出格式:
如果n为真素数，则输出“yes”，否则输出“no”。*/
#include <stdio.h>
int main(void)
{
	int n,m,num[20],sum=0;
	int pernumber(int x);
	scanf("%d",&n);
	m=n;
	for(int i=0;;i++){
		if(n==0)
		break;
		else
		num[i]=n%10;
		n=n/10;
		sum+=num[i];
	} 
	if(pernumber(sum)==0&&pernumber(m)==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
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
