//strcat

#include <stdio.h>
#include <assert.h>
#include <string.h>

char* my_strcat(char*str1 , char*str2)
{
    assert(str1);
    assert(str2);
    char* ret = str1;
    // while (*str1 != '\0')
    // {
    //     str1++;
    // }
    int len = strlen(str1);
    str1 = str1+len;
    while ( *str1++ = *str2++ )
    {
        ;
    }
    return ret;
}


int main()
{
    char arr1[30] = "hallo";
    char arr2[] = " world";
    my_strcat(arr1,arr2);
    printf("%s",arr1);
    return 0;
}