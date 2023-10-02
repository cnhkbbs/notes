#include<stdio.h>
#include <windows.h>
void color(short x)
{
    if(x>=0 && x<=15)
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
    else
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
}
int main()
{
  	int i,j;
	int selectnumber(int x);
	int trueorfalse(int y);  
	color(10);
  	  printf("		 			    	*****************	 	    				\n");
      printf("		 			    	******CClub******	 	    				\n");
      printf("		 			    	******CClub******	 	    				\n");
      printf("		 			    	******CClub******	 	    				\n");
	  printf("		 			    	*****************	 	    				\n");
	 color(16); 
	  printf("		 			    	");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15 | 8 | 128 | 64);
	printf("------请选择指令------\n");
	color(16); 
		  printf("                                          ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15 | 8 | 128 | 64);
	printf("文字文字文字文字文字文字文字\n");
	color(16);
			printf("\n"); 
			  printf("                                          ");
	printf("文字文字文字文字文字文字文字文字文字文字\n");
	color(16); 
			  printf("                                          ");
	printf("文字文字文字文字文字文字文字文字文字文字\n");
	color(16); 
			  printf("                                          ");
			  printf("文字文字文字文字文字文字文字\n");
			  printf("\n"); 
	color(16); 
				  printf("     ");
	color(15);//亮白色 	
	printf("			编号		名称		文字文字	        文字文字\n"); 
	printf("		       	1   		文字		"); 
	color(2);//绿色 
	printf(" 文字  		");
	color(4);//红色
	printf("文字文字文字文字   		\n");
	color(15);
	printf("		       	2   		文字文字文字   "); 
		color(4);//红色
		printf(" 文字文字文字文字	");
		color(2);//绿色
		printf("文字   	\n");
	color(15);
		printf("		       	3   		文字文字文字   "); 
			color(6);//黄颜色
			printf(" 文字           	");
			color(2);//绿色
			printf("文字   	\n");
	color(15);
			printf("		       	4   		文字文字文字   "); 
				color(6);//黄颜色
				printf(" 文字           	");
				color(2);//绿色
				printf("文字   	\n"); 
	color(15);
			printf("		       	5   		文字文字文字   "); 
				color(10);//淡绿色 
				printf(" 文字             	");
				color(2);//绿色
				printf("文字   	\n"); 
	color(15);
				printf("		       	6   		文字文字文字     \n"); 
	for(;;){
		color(4);
		printf("请输入相应序号后按回车以执行\n");
		scanf("%d",&i);
		j=selectnumber(i);
		if(j!=0)
		{
			break;
		}
		else
		continue;	
	}
	printf("感谢使用！"); 
	system("pause");
				
}

int selectnumber(int x)
{
	int trueorfalse(int y);
	int number;
	switch(x)
			{
				case 1:ShellExecute(NULL,"open","https://baidu.com",NULL,NULL,SW_HIDE);number=trueorfalse(number);break;
				case 2:ShellExecute(NULL,"open","https://baidu.com",NULL,NULL,SW_HIDE);number=trueorfalse(number);break;
				case 3:ShellExecute(NULL,"open","https://baidu.com",NULL,NULL,SW_HIDE);number=trueorfalse(number);break;
				case 4:ShellExecute(NULL,"open","https://baidu.com",NULL,NULL,SW_HIDE);number=trueorfalse(number);break;
				case 5:ShellExecute(NULL,"open","https://baidu.com",NULL,NULL,SW_HIDE);number=trueorfalse(number);break;
				case 6:number=2;break;//取消
			    default :color(4);printf("输入数值错误请重新输入！！\n");number=0;	
			}
			return number;	
} 
int trueorfalse(int y)
{
 color(2);
 printf("				执行是否成功？\n");
 color(15);
 printf("				成功请键入1失败请键入0\n");
 scanf("%d",&y);
 return y;
}
