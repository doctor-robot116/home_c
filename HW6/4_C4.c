#include <stdio.h>

int f(int x) // функция f, принимает целочисленный аргумент x
{
    int result = 0; // инициализируем переменную 'result' значением 0
    if ((x >= -2) && (x < 2))
        result = x * x;
    if (x >= 2)
        result = x*x+4*x+5;
    if (x < -2)
        result = 4;
    return result;
}

int main(void)
{
    int a=1, b, max = 0;
    while (a != 0) // запускаем цикл while, пока 'a' не станет равным 0
    {
        scanf("%d", &a);
        b = f(a); // Вызов функции 'f' с аргументом 'a' и сохранение результата в 'b'
        //~ printf("%d\n",f(a));
        if (b > max) // проверяем, больше ли 'b', чем 'max = 0'
            max = b; // обновляем 'max', если 'b' больше текущего 'max'
    }
    printf("%d\n", max);
    return 0;
}
