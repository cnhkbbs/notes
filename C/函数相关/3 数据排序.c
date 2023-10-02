/*输入n（<10）个整数，用任一排序算法按从小到大排序后输出。*/
#include <stdio.h>

void  fun(int a[], int  n);

int main()
 {int i,a[10],n;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  fun(a,n);
  for(i=0;i<n;i++)
     printf("%3d",a[i]);
  printf("\n");
return 0;
}
void fun(int a[10],int n)
{
	int t,i,j;
	for(i=0;i<n;i++)
  	{
  		for(j=i;j<n;j++){
  			if(a[j]<a[i])
  			{
  				t=a[i];
  				a[i]=a[j];
  				a[j]=t;
  			}
  			
  		}
  	}
	}
