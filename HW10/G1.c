/*
 * G1.c
 * Dmitry Alekseev
 * D01-031

Три раза
В файле input.txt дана строка. Вывести ее в файл output.txt три раза через запятую и показать количество символов в ней.

Формат входных данных
Строка из английских букв и пробелов. Не более 100 символов. В конце могут быть незначащие переносы строк.

Формат результата
Исходная строка 3 раза подряд, через запятую пробел и количество символов в ней.
 *
 *  */

#include <stdio.h>
#include <string.h>

#define SIZE 200


int main(void)
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char s[SIZE];
    fscanf(input, "%[^\n^EOF]s", s);
    fprintf(output,"%s, %s, %s %d", s, s, s, (int)strlen(s));
    fclose(input);
    fclose(output);
    return 0;
}


