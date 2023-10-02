#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c;
    int isLowercaseVowel, isUppercaseVowel;
    printf("输入一个字母: ");
    scanf("%c",&c);
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');//小写字母，值为1时说明是元音//
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');//大写字母，值为1时说明是元音//
    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c 是元音\n", c);
    else
        printf("%c 是辅音\n", c);
    system("pause");
    return 0;
}
