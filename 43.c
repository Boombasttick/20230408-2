//memmove
//涉及重叠的拷贝      [1,2,3,4,5,6,7,8]  将 12345 拷贝到 34567 上

#include <stdio.h>
#include <string.h>
#include <assert.h>

void* my_memmove(void* ret1 , const void* ret2 , size_t num)
{
    void* ret = ret1;
    assert(ret1 && ret2);
    if ((char*)ret2<(char*)ret1)
    {
        while (num--)
        {
            *((char*)ret1+num) = *((char*)ret2+num);
        }
    }
    else
    {
        while (num--)
        {
            *(char*)ret1 = *(char*)ret2;
            // ++ (char*)ret1 ;     //VScode报错   
            // ++ (char*)ret2;
            (char*)ret1 ++;     
            (char*)ret2 ++;
        }
    }
    return ret;
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int i=0;
    //memmove(arr+2,arr,20);
    my_memmove(arr+2,arr,20);
    for(i=0 ; i<8 ; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}