/*
* F1
* D01-031 Alekseev Dmitry
* Сортировка по взрастанию
Написать только одну функцию, которая сортирует массив по возрастанию.
Необходимо реализовать только одну функцию, всю программу составлять не надо.
Строго согласно прототипу. Имя функции и все аргументы должны быть: void sort_array(int size, int a[]).
Всю программу загружать не надо, только одну эту функцию. Можно просто закомментировать текст всей программы, кроме данной функции.
* Input format - Функция принимает на вход, первый аргумент - размер массива, второй аргумент - адрес нулевого элемента.
* Output format - Функция ничего не возвращает. Производит сортировку переданного ей массива по возрастанию.
*/

#include <stdio.h>

void sort_array(int s, int *a)
{
    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j < s - i - 1; j++)
        {
            if(a[j] - a[j + 1] > 0)
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}