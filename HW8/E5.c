/*
* E5
* D01-031 Alekseev Dmitry
* Считать массив из 10 элементов и посчитать сумму положительных элементов массива.
* Input format - 10 целых чисел через пробел
* Output format - Одно целое число - сумма положительных элементов массива
*/

#include <stdio.h>

int main()
{
    int i, sum;
    int arr[10];
    sum = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0)
        {
            sum+=arr[i];
        }
    }
    printf("%d\n", sum);
    return 0;
}

