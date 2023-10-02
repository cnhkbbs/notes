#include<stdio.h>
#define LONG 5
int main()
{
 int Width,High,total;
 printf("长度已给定为5\n");

 printf("请输入宽度");
 scanf("%d",&Width);
 
 printf("请输入高度");
 scanf("%d",&High);

 total=LONG*Width*High;
 printf("体积为\n");
 printf("%d\n",total);
}
    