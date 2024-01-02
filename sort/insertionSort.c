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

int insertionSort01(int *array, int length)
{
    int ret = 0;
    int tmp = 0;
    for (int idx = 1; idx < length; idx++)
    {
        tmp = array[idx];
        for (int jdx = idx; jdx > 0; jdx--)
        {
            if (tmp < array[jdx - 1])
            {
                array[jdx] = array[jdx -1];
            }
            else
            {
                /* 找到位置 */
                array[jdx] = tmp;
                break;
            }
        }

    }

    return ret;
}

int insertionSort02(int *array, int length)
{
    int ret = 0;
    int tmp = 0;
    int cur = 0;
    for (int idx = 1; idx < length; idx++)
    {
        tmp = array[idx];
        cur = idx;
        while (cur > 0 && tmp < array[cur - 1])
        {
            array[cur--] = array[cur - 1];
        }
        array[cur] = tmp;
    }

    return ret;
}


int main()
{

    int array[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    int  length = sizeof(array) / sizeof(array[0]);

    insertionSort01(array, length);
    //insertionSort02(array, length);
    printArray(array, length);


    return 0;
}










#if 0
int main()
{
    int ret = 0;

    int array[BUFFER_SIZE] = {1, 30, 24, 5, 58, 12, 39};
    int tmp = 0;
    for (int idx = 1; idx < BUFFER_SIZE; idx++)
    {
        tmp = array[idx];
        for (int jdx = idx; jdx >= 0; jdx--)
        {
            if (tmp < array[jdx - 1])
            {
                array[jdx] = array[jdx - 1];
            }
            else
            {
                /* 找到位置 */
                array[jdx] = tmp;
                break;
            }
        }
    }
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d]:%d\t", idx, array[idx]);
    }
    printf("\n");

    return ret;
}
#endif