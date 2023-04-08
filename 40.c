//strerror

#include <stdio.h>
#include <string.h>
#include <errno.h>  
//errno 是一个全局的错误码的变量
//当C语言的库函数在执行过程中，发生了错误，就会吧对应的错误码，赋值到errno中

int main()
{
    //char* str = strerror(errno);
    FILE* pf = fopen("text.txt","r");
    if (pf == NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        printf("success!!!");
    }
    // printf("%s\n",str);

    return 0;
}