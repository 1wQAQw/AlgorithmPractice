#include <stdio.h>


#define BUFFER_SIZE 6 

int swap(int *val1, int *val2)
{
    int ret = 0;

    int tmp = *val1;
    *val1 = *val2;
    *val2 = tmp;

    return ret;
}


int printArray(int *array, int arraySize)
{
    int ret = 0;
    for(int idx = 0; idx < arraySize; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }
    return ret;
}

/* 时间复杂度：O(n^2)*/
int bubblesort01(int *array, int length)
{
    for(int end = length; end > 0; end--)
    {
        for(int begin = 1; begin < length; begin++)
        {
            if(array[begin] < array[begin - 1])
            {
                /* 后面的数 比 前面的数小 交换 */
                swap(&(array[begin]), &(array[begin - 1]));
            }
        }
    }
}




int bubblesort02(int *array, int length)
{
    /* 已经排好序的标志 */
    int sorted = 1;
    for(int end = length; end > 0; end--)
    {
        for(int begin = 1; begin < length; begin++)
        {  
            /* 后面的数 比 前面的数小 交换 */
            if(array[begin] < array[begin - 1])
            {
              
                swap(&(array[begin]), &(array[begin - 1]));
                /* 数据是没有排好序的 */
                sorted = 0;
            }
        }
        if(sorted == 1)
        {
            break;
        }
    }
}

int bubblesort0(int *array, int length)
{
    /* 已经排好序的标志 */
    int sorteIndex = 0;
    for(int end = length; end > 0; end--)
    {
        for(int begin = 1; begin < length; begin++)
        {  
            /* 后面的数 比 前面的数小 交换 */
            if(array[begin] < array[begin - 1])
            {
              
                swap(&(array[begin]), &(array[begin - 1]));
                sorteIndex = begin;
            }
        }
        /* 更新索引 */
        end = sorteIndex;
    }
}


int main()
{

    int array[BUFFER_SIZE] = {11, 36, 24, 107, 23, 65};

    int  length = sizeof(array) / sizeof(array[0]);
    
    bubblesort(array, length);

    printArray01(array, length);

    return 0; 
}




