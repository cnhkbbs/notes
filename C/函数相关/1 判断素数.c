/*本题的目标很简单，就是判断一个给定的正整数是否素数。

输入格式：
输入在第一行给出一个正整数N（≤ 10），随后N行，每行给出一个小于2 
31
 的需要判断的正整数。

输出格式：
对每个需要判断的正整数，如果它是素数，则在一行中输出Yes，否则输出No。*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sushu(int n)
{
	int sushu(int n);
    int i;
    if(n==1)
        return 0;
    for(i=2;i<sqrt(n);i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
int a, b, c;
	scanf("%d", &a);
	for (b = 0; b < a; b++)
	{
		scanf("%d", &c);
		if (sushu(c))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;	
}
