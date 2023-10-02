#include <stdio.h>
#include <stdlib.h> 
int main()
{
    printf("方案一，使用while和if\n");
    int n1, n2, minMultiple;
    printf("输入两个正整数:");
    scanf("%d %d", &n1, &n2);
    minMultiple = (n1>n2) ? n1 : n2;
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            printf("%d 和 %d 的最小公倍数为 %d\n", n1, n2,minMultiple);
            break;
        }
        ++minMultiple;
    }
    printf("方案二，通过最大公约数计算\n");
    int i,gcd,lcm;
    printf("输入两个正整数: ");
    scanf("%d %d",&n1,&n2);
    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    lcm = (n1*n2)/gcd;
    printf("%d 和 %d 的最小公倍数为 %d\n", n1, n2, lcm);
    system("pause");
    return 0;
}
