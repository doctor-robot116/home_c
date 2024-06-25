/*
 * G2.c
 * Dmitry Alekseev
 * D01-031
Строка и цифры
Считать число N из файла input.txt. Сформировать строку из N символов. N четное число, не превосходящее 26. На четных позициях должны находится четные цифры в порядке возрастания, кроме 0, на нечетных позициях - заглавные буквы в порядке следования в английском алфавите. Результат записать в файл output.txt

Формат входных данных
Четное N ≤ 26

Формат результата
Строка из английских букв и цифр
 *
 *  */
#include <stdio.h>


int main(void)
{
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");
    int n;
    fscanf(inputFile,"%d",&n);
    int a = 2;
    int b = 1;
    for (int i = 0; i < n/2; i++)
    {
        fprintf(outputFile,"%c%c",0x40 + b,0x30+ a);
        a=a+2;
        b++;
        if (a>8)
        {
            a = 2;
        }
    }
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
