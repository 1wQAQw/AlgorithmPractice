#include <stdio.h>

#define BUFFER_SIZE 7


int printArray(int *array, int arraySize)
{
    int ret = 0;
    for(int idx = 0; idx < arraySize; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    return ret;
}

/* 选择排序：相较于冒泡排序，减少了交换次数 */
int main()
{
    int ret = 0;
    int array[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    int  length = sizeof(array) / sizeof(array[0]);
    int minValue = 0;
    int minIndex = 0;
    for (int pos = 0; pos <length; pos++)
    {
        /* 定义最小值 */
        minValue = array[pos];
        for (int begin = pos + 1; begin < length; begin++)
        {
            /* 遍历到的元素比最小值要小 */
            if (minValue > array[begin])
            {
                minValue = array[begin];
                minIndex = begin;
            }
        }
        
        if (array[pos] > minValue)
        {
            int tmp = array[pos];
            array[pos] = minValue;
            array[minIndex] = tmp;
        }
    }

    printArray(array, length);




    return ret;
}













































/*
int main()
{
    int ret = 0;

    int array[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    
    int pos1 = 0;
    int pos2 = 0;
    int tmp = 0;
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        pos1 = idx;
        for(int jdx = idx + 1; jdx < BUFFER_SIZE; jdx++)
        {
            if (array[pos1] > array[jdx])
            {
                pos2 = jdx;
            }
        }
        if (array[pos1] > array[pos2])
        {
            tmp = array[pos1];
            array[pos1] = array[pos2];
            array[pos2] = tmp;
        }
    }
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]:%d\t", idx, array[idx]);
    }
    printf("\n");

    return ret;
}
*/