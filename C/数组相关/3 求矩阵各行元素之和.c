/*本题要求编写程序，求一个给定的m×n矩阵各行元素之和。

输入格式：
输入第一行给出两个正整数m和n（1≤m,n≤6）。随后m行，每行给出n个整数，其间

以空格分隔。

输出格式：
每行输出对应矩阵行元素之和。*/
#include<stdio.h>
int main()
{
	int m,n,i,j,k;
	scanf("%d %d",&m,&n);
	int num[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&num[i][j]);	
		}	
	} 
	for(i=0;i<m;i++){
		k=0;
		for(j=0;j<n;j++)
		{
			k+=num[i][j];
		} 
		printf("%d\n",k);
	}
} 
