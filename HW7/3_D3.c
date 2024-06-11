/**
Alekseev Dmitry
Дано целое не отрицательное число N. Выведите все его цифры по одной, в обратном порядке, разделяя их пробелами или новыми строками.
Составить рекурсивную функцию.
 */

#include <stdio.h>
void rec_func(int n)
{
    if (n < 10)
    {
        printf("%d",n); //прямой ход
        return;
    }
    printf("%d ", n%10);
    rec_func(n/10);
}

//printf("%d ",n); //обратный ход

int main(void)
{
    int n;
    scanf("%d",&n);
    rec_func(n);
    return 0;
}
