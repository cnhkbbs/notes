/*Calculate a+b and output the sum in standard format -- that is, the digits must be separated into groups of three by commas (unless there are less than four digits).

Input Specification:
Each input file contains one test case. Each case contains a pair of integers a and b where −10 
6
 ≤a,b≤10 
6
 . The numbers are separated by a space.

Output Specification:
For each test case, you should output the sum of a and b in one line. The sum must be written in the standard format.*/
解法1
#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,sum,a,b,c;
	scanf("%d %d",&n,&m);
	sum=n+m;
	if(a>=-1000000&&b<=1000000)
	if(sum>999||sum<-999)
	{
		if(sum>999999||sum<-999999)
		{
		a=sum/1000000;
		b=abs(sum/1000%1000);
		c=abs(sum%1000);	
		printf("%d,%03d,%03d",a,b,c);
		}
		else
		{
			a=sum/1000;
			b=abs(sum%1000);
			printf("%d,%03d",a,b);
		}
	}
	else
	{
		printf("%d",sum);
	}
}
解法2：
#include<stdio.h>
#include<math.h>

char g[1000010];
char ans[1000010];
int main(void)
{
    int cnt = 0;
    int a,b;scanf("%d%d",&a,&b);
    int st = a+b;
    //我们要把该数转化为字符串形式，如果该数为负数的话取模就会得到负数不好转化为字符所以先取正 
    int m = abs(st);
    while(m)g[cnt++] = m%10+'0',m/=10;//特别注意我们取出来的数是逆序的 
    //特判和是否为负数，如果为负数就把负号加上 
    if(st<0)g[cnt++] = '-';
    //特判零，如果和为0的话cnt是不会加的所以需要特判 
    if(st == 0)g[cnt++] = '0';
    int k = 0;
    for(int i = 0,j = 0;i<cnt;i++)
    {
        ans[k++] = g[i];
        j++;
        //如果为j和3取模是零就加一个逗号，如果到了最后一个数字的话该位置是不能加零所以i!=cnt-1
		//并且如果前面是负号的话也不能加逗号所以g[i+1]!='-' 
        if(j%3 == 0 && i != cnt-1&&g[i+1]!='-')ans[k++] = ',';
    }
    //逆序输出 
    for(int i = k-1;i>=0;i--)
        printf("%c",ans[i]);
    return 0;
}
