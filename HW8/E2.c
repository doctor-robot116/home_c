/*
 * E2.c
 * Dmitry Alekseev
 * D01-031
 * Ввести c клавиатуры массив из 5 элементов, найти минимальный из них.
 */



#include <stdio.h>
#include <inttypes.h>

#define SIZE 5

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

int main(void)
{

    int arr[SIZE];
    input_fix(SIZE,arr); //фиксированный массив
    min(SIZE,arr);
    printf("%d\n", min(SIZE,arr));
    return 0;
}

