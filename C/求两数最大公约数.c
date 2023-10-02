#include <stdio.h>
#include <stdlib.h> 
int hcf(int n1, int n2);   //为方案四服务//
int main()
{
    int n1, n2, i, gcd;
    printf("方案一，使用for和if\n");
    printf("输入两个正整数，以空格分隔: ");
    scanf("%d %d", &n1, &n2);
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    printf("%d 和 %d 的最大公约数是 %d\n", n1, n2, gcd);
    printf("方案二，使用while和if\n");
    printf("输入两个数，以空格分隔: ");
    scanf("%d %d",&n1,&n2);
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;   //-=表示把左边的数减去右边的数的差赋值给左边的数//
        else
            n2 -= n1;
    }
    printf("最大公约数是 %d\n",n1);
    printf("方案三，包含正数和负数时\n");
    printf("输入两个数，以空格分隔: ");
    scanf("%d %d",&n1,&n2);
    n1 = ( n1 > 0) ? n1 : -n1;   //当n1>0时，n1=n1否则n1=-n1
    n2 = ( n2 > 0) ? n2 : -n2;   //当n2>0时，n2=n2否则n2=-n2
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("最大公约数是 %d\n",n1);
    printf("方案四，使用递归方法\n");
    printf("输入两个正整数: ");
    scanf("%d %d", &n1, &n2);
    printf("%d 和 %d 的最大公约数为 %d\n", n1, n2, hcf(n1,n2));
    system("pause");
    return 0;
}
int hcf(int n1, int n2)
{
    if (n2 != 0)
       return hcf(n2, n1%n2);
    else 
       return n1;
}
