/*
 * G3.c
 * Dmitry Alekseev
 * D01-031
Последний номер символа
В файле input.txt дана строка из 1000 символов. Показать номера символов, совпадающих с последним символом строки. Результат записать в файл output.txt

Формат входных данных
Строка не более 1000 символов

Формат результата
Целые числа через пробел - номера символа, который совпадает с последним символом строки.
 *
 *  */

#include <stdio.h>
#include <string.h>

int main(void) {
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char s[1000] = {'\0'};
    fscanf(input, "%[^EOF^\n]s", s);
    //  fgets(s, 1000, input);
    if (strlen(s) > 1)
    {
        int lastChar = s[strlen(s) - 1];
        for (int i = 0; i < strlen(s) - 1; i++)
        {
            if (s[i] == lastChar && i != strlen(s) - 1)
            {
                fprintf(output, "%d ", i);
            }
        }
    }
    fclose(input);
    fclose(output);
    return 0;
}
