/*本题要求编写程序，根据下式求π的近似值，直到最后一项小于给定精度eps。

2
π
​
 =1+ 
3
1!
​
 + 
3×5
2!
​
 + 
3×5×7
3!
​
 +⋯+ 
3×5×⋯×(2×i+1)
i!
​
 +⋯*/
#include <stdio.h>
double  fun ( double  eps)
{    
	double pi=1,a=1;
    int i;
    for(i=1;a>=eps;i++)
    {
        a=a*i/(2*i+1);
        pi=pi+a;
    }
    return 2*pi;
}
int main(void)
{ 
  double eps;
  scanf("%lf",&eps);
  printf("PI = %.5lf\n",fun(eps));
 }
