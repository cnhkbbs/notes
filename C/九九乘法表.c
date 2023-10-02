#include <stdio.h> 
#include <stdlib.h> 
int main()
{  
    int i = 0;     
    int j = 0;   
    for(i=1;i<=9;i++)
 {  
        for(j=1;j<=i;j++){  
            printf("%dx%d=%d\t",j,i,i*j);  //\t表示水平制表(HT) (跳到下一个TAB位置)//
        }     
        printf("\n");     
    }  
}
