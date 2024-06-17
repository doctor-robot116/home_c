/*
 * E1.c
 * Dmitry Alekseev
 * D01-031
 * Ввести c клавиатуры массив из 5 элементов, найти среднее арифметическое всех элементов массива.
 */



#include <stdio.h>
#include <inttypes.h>

#define SIZE 5

int input_fix(int n, int arr[])
{
    int i;
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    return i;
}

float sra_sum(int n, int arr[])
{
    float sum=0;
    for (int i=0; i < SIZE; i++)
        sum+=arr[i];
    return sum / (float)SIZE;
}


int main(void)
{

    int arr[SIZE];
    input_fix(SIZE,arr);
    float ave = sra_sum(SIZE,arr);
    printf("%.3f", ave);
    return 0;
}

