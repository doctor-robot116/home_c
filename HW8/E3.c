/*
 * E3.c
 * Dmitry Alekseev
 * D01-031
 * Считать массив из 10 элементов и найти в нем максимальный и минимальный элементы и их номера.
 * Input format - 10 целых чисел через пробел
 * Output format - 4 целых числа через пробел: номер максимума, максимум, номер минимума, минимум.
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
int min(int n, int arr[])
{
    int min = arr[0]; //вводим элемент минимум и приравниваем к нулевому элементу массива
    for (int i = 1; i < n; i++)  // в цикле
    {   if (arr[i] < min)       //проверка
            min = arr[i];
    }
    return min;
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
int posmin (int len, int arr[])
{
    int min=arr[0],i,pos=0;
    for (i = 1; i < len; i++)
        if (min > arr[i])
        {
            min = arr[i];
            pos = i;
        }
    return pos;
}
int posmax (int len, int arr[])
{
    int max=arr[0],pos=0;
    for (int i = 1; i < len; i++)
        if (arr[i] > max)
        {
            max = arr[i];
            pos = i;
        }
    return pos;
}
int main(void)
{
    int arr[SIZE];
    input_fix(SIZE,arr); //фиксированный массив
    printf("%d %d %d %d", posmax(SIZE,arr) + 1, max(SIZE,arr), posmin(SIZE,arr) + 1, min(SIZE,arr));
    return 0;
}
