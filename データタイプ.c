#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("double型の最大値:%g\n",DBL_MAX);
    printf("double型の最小値:%g\n",DBL_MIN);
    printf("double型の精度:%d\n",DBL_DIG);
    printf("int型の最大値:%d\n",INT_MAX);
    printf("int型の最小値;%d\n",INT_MIN);
    printf("int型の符号なし最大値:%u\n",UINT_MAX);
    printf("longの最大値:%id\n",LONG_MAX);
    printf("longの最小値:%id\n",LONG_MIN);
    printf("longの符号なしの最大値:%id\n",ULONG_MAX);

    return 0;
}