//将n秒转换为h：m:s的格式输出
#include<stdio.h>
int main()
{
    int time，h,m,s;
    scanf("%d",&time);
    h=time/3600;
    m=time%3600/60;
    s=time%3600%60;
    printf("%d:%d:%d",h,m,s);
}
