//strcpy

#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* str1 , char* str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);
    char* ret = str1;
    while ( *str2 != '\0' )
    {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = *str2;
    return ret;
}

//优化
// char* my_strcpy(char* str1 , char* str2)
// {
//     assert(str1 != NULL);
//     assert(str2 != NULL);
//     char* ret = str1;
//     while ( *str1++ = *str2++ )
//     {
//         ;
//     }
//     return ret;
// }

int main()
{
    char arr1[]="bit"; 
    char arr2[]="qweert";
    my_strcpy(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
}