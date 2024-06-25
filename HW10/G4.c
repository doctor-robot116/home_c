/*
 * G4.c
 * Dmitry Alekseev
 * D01-031
По одному разу
В файле input.txt даны два слова не более 100 символов каждое, разделенные одним пробелом.
Найдите только те символы слов, которые встречаются в обоих словах только один раз.
Напечатайте их через пробел в файл output.txt в лексикографическом порядке.

Input format
Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов.

Output format
Маленькие английские буквы через пробел.
 *
 *  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Для функции qsort

int compareChars(const void *a, const void *b)
{
    return *(char *)a - *(char *)b; // Функция сравнения для qsort
}

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");

    char s1[101], s2[101];
    fscanf(input, "%100s %100s", s1, s2);

    // Массивы для подсчета частоты символов
    int freq1[255] = {0};
    int freq2[255] = {0};

    // Подсчитываем частоту символов в каждом слове
    for (int i = 0; s1[i] != '\0'; i++)
    {
        freq1[(int)s1[i]]++;
    }
    for (int i = 0; s2[i] != '\0'; i++)
    {
        freq2[(int)s2[i]]++;
    }

    char commonChars[255] = {0}; // Массив для хранения общих символов
    int commonCount = 0;    // Счетчик общих символов


    // Находим символы, встречающиеся только один раз в обоих словах
    for (int i = 0; i < 255; i++)
    {
        if (freq1[i] == 1 && freq2[i] == 1)
        {
            commonChars[commonCount] = (char)i;
            commonCount++;
        }
    }

    // Сортируем общие символы в лексикографическом порядке с помощью qsort
    qsort(commonChars, commonCount, sizeof(char), compareChars);
    for (int i = 0; i < commonCount; i++)
    {
        fputc(commonChars[i], output);
        if (i < commonCount - 1)
        {
            fputc(' ', output);
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}
