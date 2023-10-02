#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int dividend, divisor, quotient, remainder;//4个变量分别是被除数、除数、商和余数//

    printf("输入被除数: ");
    scanf("%d", &dividend);

    printf("输入除数: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;             //运算符/用来计算商//
    remainder = dividend % divisor;            //运算符%用来计算余数//
    printf("商 = %d\n", quotient);
    printf("余数 = %d\n", remainder);
    return 0;
}
