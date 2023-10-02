/*编写一个函数fun，函数的功能是：求出N×M整型数组的最大元素及其
所在的行坐标及列坐标(如果最大元素不唯一，选择位置在最前面的一个)。*/
#include <stdio.h>
#define N 4
#define M 3
int Row,Col;
int fun(int array[N][M]);
int main()
{
  int a[N][M],i,j,max,row,col;
  for(i=0;i<N;i++)
    for(j=0;j<M;j++)
       scanf("%d",&a[i][j]);
  for(i=0;i<N;i++)
    {  for(j=0;j<M;j++)
          printf("%5d",a[i][j]);
       printf("\n");
    }
  max=fun(a);
  printf("max=%d,row=%d,col=%d",max,Row,Col);
 return 0;
 }
int fun(int array[N][M])
{
	int i,j,k;
	Row=0;Col=0;
	k=array[0][0];
	for(i=0;i<N;i++){
			for(j=0;j<M;j++)
			{
				if(k<array[i][j])
				{
					k=array[i][j];
					Row=i;
                    Col=j;
				}
			}
    }
	return k;
}
