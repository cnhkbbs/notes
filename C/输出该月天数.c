#include <stdio.h>
int main()
{
    int yyyy,mm;
    scanf("%d %d",&yyyy,&mm);
    if(yyyy%400==0||(yyyy%4==0&&yyyy%100!=0))
      if(mm==1||mm==3||mm==5)
         printf("year = %d month = %d days=31",yyyy,mm);
       else if(mm==7||mm==8||mm==10)
          printf("year = %d month = %d days=31",yyyy,mm);
       else if(mm==12)
           printf("year = %d month = %d days=31",yyyy,mm);
       else if(mm==2)
         printf("year = %d month = %d days=29",yyyy,mm);
       else
        printf("year = %d month = %d days=30",yyyy,mm);
    else
    if(mm==1||mm==3||mm==5)
         printf("year = %d month = %d days=31",yyyy,mm);
    else if(mm==7||mm==8||mm==10)
        printf("year = %d month = %d days=31",yyyy,mm);
    else if(mm==12)
           printf("year = %d month = %d days=31",yyyy,mm);
    else if(mm==2)
         printf("year = %d month = %d days=28",yyyy,mm);
    else
        printf("year = %d month = %d days=30",yyyy,mm);
    return 0;
}
