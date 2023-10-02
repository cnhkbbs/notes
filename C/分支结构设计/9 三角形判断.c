/*给定平面上任意三个点的坐标
(x1,y1) (x2,y2) (x3,y3)
检验它们能否构成三角形。
输入格式:
输入在一行中顺序给出六个[−100,100]范围内的数字，即三个点的坐标x1,y1,x2,y2,x3,y3 
输出格式:
若这3个点不能构成三角形，则在一行中输出“Impossible”；若可以，则在一行中输出该三角形的周长和面积，格式为“L = 周长, A = 面积”，输出到小数点后2位。*/
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3;
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
    double a,b,c,A,L;
    a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
    if(a+b>c&&a+c>b&&b+c>a&&a-b<c&&a-c<b&&c-b<a)
    {
        L=a+b+c;
       double p=L/2.0;
       A=sqrt(p*(p-a)*(p-b)*(p-c));
       printf("L = %.2f, A = %.2f\n",L,A);
    }
    else
    printf("Impossible");
    return 0;
}
