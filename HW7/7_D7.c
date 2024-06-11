/*
Alekseev Dmitry
Составить рекурсивную функцию, печать всех чисел от N до 1.
Формат входных данных:
Одно натуральное число
Формат результата:
Последовательность целых чисел от введенного числа до 1, через пробел.
 */


#include <stdio.h>

void rec_func(int n)
{
    if (n == 0)
    {   printf("%d ",n);
        return;
    }
    if (n == 1)
    {   printf("%d ",n);
        return;
    }
    if (n >= 1)
    {
        printf("%d ",n); //обратный ход
        rec_func(n-1);
    }
}
int main(void)
{
    int n;
    scanf("%d",&n);
    rec_func(n);
    return 0;
}
