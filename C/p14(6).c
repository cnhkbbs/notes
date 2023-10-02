#include <stdio.h>
void main(){
    int a,b,c,max;
    printf("请输入三个数,用空格分开\n");
    scanf("%d %d %d",&a,&b,&c);
    max=a;
    if(max<b){
        max=b;
    }
    if(max<c){
        max=c;
    }
    printf("%d",max);
}
