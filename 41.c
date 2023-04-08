#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch = 'A';
    int ret = islower(ch);
    printf("%d\n",ret);

    char ch1 = tolower('Q');   //大写转小写
    char cha = toupper('q');   //小写转大写
    putchar(ch1);              //putchar打印字符
    putchar(cha);
}