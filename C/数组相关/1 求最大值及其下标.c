/*本题要求编写程序，找出给定的n个数中的最大值及其对应的最小下标（下标从0开始）。

输入格式:
输入在第一行中给出一个正整数n（1<n≤10）。第二行输入n个整数，用空格分开。

输出格式:
在一行中输出最大值及最大值的最小下标，中间用一个空格分开。*/
# include<stdio.h>

int main()
{
    int i;
    scanf ("%d", &i);
    int num[i];
    int j;
    for (j = 0; j < i; j ++) {
        scanf("%d",&num[j]);
    }

    int max;
	int cnt = 0;
    max = num[0];
    for (j = 1; j < i; j ++) {
        if (num[j] > max) {
            max = num[j];
			cnt = j;
        }
    }     

    printf("%d %d",max,cnt);
    
    return 0;
}
