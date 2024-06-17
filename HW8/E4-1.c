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
int input_fix(int n, int arr[])  //функция ввода фиксированного массива
{
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    return i;
}
int max (int n, int arr[])
{
    int max = arr[0];
    for (int i = 1; i < n; i++)  // в цикле
    {   if (arr[i] > max)       //проверка
            max = arr[i];
    }
    return max;
}
int max2 (int n, int arr[])
{
    int max = max(n, arr);
    int max2 = arr[0];
    for (int i = 1; i < n; i++)  // в цикле
    {   if (arr[i] == max) {
            continue; // skip if equal to max
        }
        if (arr[i] > max2)       //проверка
            max2 = arr[i];
    }
    return max2;
}
int main(void)
{
    int arr[SIZE];
    input_fix(SIZE,arr); //фиксированный массив
    int sum = max(SIZE,arr) + max2(SIZE,arr);
    printf("%d\n", sum);
    return 0;
}
