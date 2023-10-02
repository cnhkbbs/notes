/*42 求n以内最大的k个素数以及它们的和
本题要求计算并输出不超过n的最大的k个素数以及它们的和。

输入格式:
输入在一行中给出n(10≤n≤10000)和k(1≤k≤10)的值。

输出格式:
在一行中按下列格式输出:

素数1+素数2+…+素数k=总和值*/
#include<stdio.h>
int main()
{
	int n,m,i,j=0,sum=0;
	int pure(int x);
	void op(int y,int z,int n);
	scanf("%d %d",&n,&m);
	for(i=n;;i--){  //倒序遍历 
		if(j==m||i==0){
			break;
		}else   
		if(pure(i)==0){
			sum+=i;
			op(i,j,m);
			j++;
		}
	}
	printf("=%d",sum); 
}
void op(int y,int z,int m)  //逻辑输出 
{
	 if(y==2) //解决取到最小素数停止问题 
	 {
	 	printf("%d",y);
	 }
	 else if(z<m-1)
	 {
	 	printf("%d+",y);
	 }
	 else
	 {
	 	printf("%d",y);
	 }
} 
int pure(int x)  //素数判断 
{
	int flag=0;
	for(int i=2;i<x;i++){
		if(x%i==0){
			flag=1;
			break;
		}
	}
	if(x==1){
		flag=1;
	}
	return flag;
}
