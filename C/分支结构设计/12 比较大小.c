/*本题要求将输入的任意3个整数从小到大输出。

输入格式:
输入在一行中给出3个整数，其间以空格分隔。

输出格式:
在一行中将3个整数从小到大输出，其间以“->”相连。*/
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(c>b&&b>a&&c>a)
	printf("%d->%d->%d",a,b,c);
	else if(b>c&&c>a&&b>a)
	printf("%d->%d->%d",a,c,b);
    else if(a>c&&c>b&&a>c)
	printf("%d->%d->%d",b,c,a);
	else if(c>a&&a>b&&c>b)
	printf("%d->%d->%d",b,a,c);
	else if(a>b&&b>c&&a>c)
	printf("%d->%d->%d",c,b,a);
	else if(b>a&&a>c&&b>c)
	printf("%d->%d->%d",c,a,b);
    else
    printf("%d->%d->%d",a,b,c);
	return 0;
}
