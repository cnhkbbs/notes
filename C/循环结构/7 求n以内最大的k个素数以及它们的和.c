/*本题要求计算并输出不超过n的最大的k个素数以及它们的和。

输入格式:
输入在一行中给出n(10≤n≤10000)和k(1≤k≤10)的值。

输出格式:
在一行中按下列格式输出:

素数1+素数2+…+素数k=总和值
其中素数按递减顺序输出。若n以内不够k个素数，则按实际个数输出。*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,d,i;
	scanf("%d %d",&a,&b);
			for(;;a--)   //倒数开始 （a-1运算） 
			{
			{int flag=1;
			for(i=2;i<(a-1);i++)
			{
			if(a%i==0)
			{
			flag=0;
			break;
		    }
	        }
	        if(flag)
			{
			b--;
			if(a<=2)
			{
				d+=a; 
				printf("%d",a);
				break;		
			}
			else if(b>0) //判断输出开始 （用于输出类似于1+2+3+...+n这种式子） 
				{
			d+=a; 
			printf("%d+",a);
			continue;
				}
			else if(b==0)
				{
				d+=a; 
				printf("%d",a);
				continue;
				}//判断输出结束 
			else
			break;
			}
			}
			
			
			} 		
	printf("=%d",d);
	return 0;
}
