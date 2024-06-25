/*
 * F5.c
 * Максимум в массиве
Написать только одну функцию, которая находит максимальный элемент в массиве.
Всю программу загружать не надо.
Прототип функции: int find_max_array(int size, int a[])

Формат входных данных - Массив состоящий из целых чисел.
Первый аргумент, размер массива, второй аргумент адрес нулевого элемента.
Формат результата - Одно целое число

 * Dmitry Alekseev
 * D01-031
 *  */

#include <stdio.h>

//~ int main(void)
//~ {
//~ long long int size;
//~ scanf("%lld", &size);
//~ int arr[size];
//~ for(int i = 0; i<size; i++)
//~ {
//~ scanf("%d", &arr[i]);
//~ }
//~ printf("%d", find_max_array(size, arr));
//~ return 0;
//~ }

int find_max_array(int size, int a[])
{
    if (size == 0)
    {
        return 0;
    }

    signed int max = a[0];
    for(int i=1; i<size; i++)
    {
        if (a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
}

