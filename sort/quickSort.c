#include <stdio.h>

#define BUFFER_SIZE 10

/* 打印函数 */
int printArray(int *array, int arraySize)
{
    int ret = 0;

    for(int idx = 0; idx < arraySize; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    // printf("\n");

    return ret;
}

int quickSort(int *array, int start, int end)
{
    if(start >= end)
    {
        return 0;
    }
    int copyNum = array[start];
    int left = start;
    int right = end;
    while(left < right)
    {
        while(left < right && copyNum < array[right])
        {
            right--;
        }
        if(left < right)
        {
            array[left] = array[right];
            left++;
        }
        while(left < right && copyNum > array[left])
        {
            left++;
        } 
        if(left < right)
        {
            array[right] = array[left];
            right--;
        }
    }
    array[left] = copyNum;
    quickSort(array, start, left-1);
    quickSort(array, right + 1, end);
}

int main()
{
    int ret = 0;

    int array[BUFFER_SIZE] = {17, 13, 29, 39, 19, 30, 34, 18, 33, 15};
    int length = sizeof(array) / sizeof(array[0]);
    quickSort(array, 0, length - 1);
    printArray(array, length);

    return ret;
}