/*本题要求统计一个整型序列中出现次数最多的整数及其出现次数。

输入格式：
输入在一行中给出序列中整数个数N（0<N≤1000），以及N个整数。数字间以空格分隔。

输出格式：
在一行中输出出现次数最多的整数及其出现次数，数字间以空格分隔。题目保证这样的数字是唯一的。*/
#include<stdio.h>
int main()
{
 int num[1000],count[1000]={0};
 int i=0,j,n,max;
 scanf("%d",&n);
 while(i<n){
 	scanf("%d",&num[i]);
 	i++;
 }
 for(i=0;i<=n;i++)
 {
 	j=i;
 	while(j<n){
 		if(num[j]==num[i])
 		{
		 count[i]++;	
		 }
	 	j++; 
	 }
 }
 j=0;
 max=0;
 for(i=0;i<n;i++){
	 if(max<count[i])
	 {
	 	max=count[i];
	 	j=i;
	 }
 }	
 printf("%d %d",num[j],max);
}
