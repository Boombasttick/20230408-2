//memcmp

#include <stdio.h>
#include <string.h>

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {1,2,5,4,3};
    int a = memcmp(arr1,arr2,10);   //比较的是字节    0为相同
    printf("%d\n",a);
    return 0;
}