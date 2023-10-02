#include<stdio.h>
 
int calculate(int Long,int Width,int High);
int main()
{
  int m_Long;
  int m_Width;
  int m_High;
  int result;

  printf("请输入宽度\n");
  scanf("%d",&m_Width);

  printf("请输入长度\n");
  scanf("%d",&m_Long);

  printf("请输入高度\n");
  scanf("%d",&m_High);

  result=calculate(m_Long,m_Width,m_High);
  printf("体积为：");
  printf("%d\n",result);

  return 0;
}

int calculate(int Long,int Width, int High)
{
 int result =Long*Width*High;
 return result;
}