!!页头文件 #include<string.h> !!
//puts(字符数组）输出字符串
char str[]={"China\nBeijing"};
puts(str);

//gets(输入字符串函数）
gets(str);

//strcat（字符串连接函数）效果：字符数组1+字符数组2
strcat(字符数组1,字符数组2);

//strcpy和strncpy（字符串复制函数）
//将字符串2复制到字符串1中去
strcpy(str1,str2);

//strcmp（字符串比较函数）
strcmp(字符1,字符2);
strcmp(字符串变量1,字符串变量2);
strcmp(字符1,字符串变量2);
/*如果字符串1=字符串2则函数值为0
如果字符串1>字符串2则函数值为一个正数
如果字符串1<字符串2则函数值为一个复数*/

//strlen(测量字符串长度的函数）(不包括'\0'在内）
long=strlen(字符数组);

//strlwr函数（转化为小写的函数）
strlwr(字符串)
 
 //strupr函数 （转化为大写的函数）
 strupr(字符串)
