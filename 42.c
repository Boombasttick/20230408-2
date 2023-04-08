//memcpy

#include <stdio.h>
#include <assert.h>

struct S
{
    char name[20];
    int age;
};

void* my_memcpy(void* ret1 , const void* ret2 , size_t num)
{
    void* ret = ret1;
    assert(ret1 && ret2);
    while (num--)
    {
        *(char*)ret1 = *(char*)ret2;
        // ++ (char*)ret1 ;     //VScode报错   
        // ++ (char*)ret2;
        (char*)ret1 ++;     
        (char*)ret2 ++;
    }
    return ret;
}

int main()
{
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[7] = {0};
    struct S arr3[] = {{"zhang",18},{"li",20}};
    struct S arr4[8] = {0};
    my_memcpy(arr2,arr1,sizeof(arr1));
    my_memcpy(arr4,arr3,sizeof(arr3));
    
    return 0;
}