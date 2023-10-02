/*编写函数fun产生如下杨辉三角形，产生的行数由main给出。

函数接口定义：
void fun(int a[N][N],int n);
其中 a 和 n 都是用户传入的参数。 函数须产生 n 行杨辉三角形。*/
#include <stdio.h>
#define N 10
void fun(int a[N][N],int n);
int main()
{
 int a[N][N];
 int i,j,n;
 scanf("%d",&n);
 fun(a,n);
 for (i=0;i<n;i++)
    { for (j=0; j<=i;j++)
           printf("%6d",a[i][j]);
       printf("\n");
    } 
 return 0;
 }
void fun(int a[N][N],int n)
 {
 	int i,j;
 	for(i=0;i<N;i++){
	 	for(j=0;j<N;j++){
		   a[i][j]=0;
		 }
	 }
	a[0][0]=1;
	 	for (i=0;i<n;i++)
  		{ 
  			for (j=0;j<=i;j++)
  				{
  				if(j==0)
  				{
  					a[i][j]=1;
  				}
  				else if(j>0)
  				{
  					a[i][j]=a[i-1][j-1]+a[i-1][j];
  				}				
  				}
  		}	
 } 
