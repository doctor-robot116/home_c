/*
 * E4.c
 * Dmitry Alekseev
 * D01-031
 * Считать массив из 10 элементов и найти в нем два максимальных элемента и напечатать их сумму.
 * Input format - 10 целых чисел через пробел.
 * Output format - Сумма двух максимальных элементов.
 */

#include <stdio.h>
#include <inttypes.h>


#define SIZE 10

int input_fix(int n, int arr[])
{
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    return i;
}

int Sum_Max(int n, int arr[])
{
    int i, max1, max2;
    max1 = 0;
    max2 = 1;
    for (i = 1; i < 10; i++)
    {
        if (arr[i] > arr[max1])
        {
            max2 = max1;
            max1 = i;
        }
        else if (arr[i] > arr[max2])
        {
            max2 = i;
        }
    }
    return arr[max1] + arr[max2];
}

int main(void) {
    int arr[SIZE];
    input_fix(SIZE, arr);
    int sum = Sum_Max(SIZE, arr);
    printf("%d\n", sum);
    return 0;
}
