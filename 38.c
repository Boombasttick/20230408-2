//strstr

#include <stdio.h>
#include <string.h>
#include <assert.h>

char* my_strstr(const char* str1,const char* str2)
{
    assert((str1 !=NULL) && (str2 != NULL));
    char* cur = str1;
    if(*str2 == '\0')
    {
        return str2;
    } 
    while (*cur)
    {
        char* s1=cur;
        char* s2=str2; 
        while((*s1 !='\0') && (*s2 !='\0') && (*s1 == *s2))
        {
            s1++;
            s2++;
        }
        if(*s2 == '\0')
        {
            return cur;
        }
        cur++; 
    }
    return NULL;
}

int main()
{
    char arr1[]="asdfghj";
    char arr2[]="dfgh";
    char* ret = my_strstr(arr1,arr2);
    if (ret == NULL)
    {
        printf("NO!!!\n");
    }
    else
    {
        printf("%s\n",ret);
    }
    return 0;
}