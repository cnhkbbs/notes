#include <stdio.h>
#include <stdlib.h> 
int main() 
{
   int i;
   printf("100以内的偶数:");
   for(i = 1; i <= 100; i++) 
   {
      if(i%2 == 0)
         printf("%2d  ", i); //%2d表示将数字按宽度为2,采用右对齐方式输出//
   }
   printf("\n100以内的奇数:");
   for(i = 1; i <= 100; i++) {
      if(i%2 != 0)
         printf("%2d  ", i);
   }
   printf("\n");
   system("pause");
   return 0;
}
