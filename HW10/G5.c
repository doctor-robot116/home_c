/*
 * G5.c
 * Dmitry Alekseev
 * D01-031
Заменить a на b
В файле input.txt дана символьная строка не более 1000 символов.
Необходимо заменить все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные.
Результат записать в output.txt.

Input format
Строка из маленьких и больших английских букв, знаков препинания и пробелов.

Output format
Строка из маленьких и больших английских букв, знаков препинания и пробелов.
 *
 *  */
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *input = fopen("input.txt", "r");
    FILE *output = fopen("output.txt", "w");
    char str[1001];
    fgets(str, 1001, input);
    int len = strlen(str); // Определяем длину строки

    for (int i = 0; i < len - 1; i++) // Проходим по строке, исключая символ конца строки
    {   
        if (str[i] == 'a')
        {
            str[i] = 'b';
        }
        else if (str[i] == 'A')
        {
             str[i] = 'B';
        }
        else if (str[i] == 'b')
        {
            str[i] = 'a';
        }
        else if (str[i] == 'B')
        {
            str[i] = 'A';
        }

    }
    fputs(str, output);
    fclose(input);
    fclose(output);
    return 0;
}
