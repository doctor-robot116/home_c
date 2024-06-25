/*
 * F4.c
 * Цифры в строке
Написать только одну функцию.
Всю программу отправлять не надо.
Вывести в порядке возрастания цифры, входящие в строку.
Цифра - количество. Функция должно строго соответствовать прототипу:
void print_digit(char s[])

Формат входных данных - Строка из английских букв, пробелов, знаков препинания и цифр
Формат результата - Функция должна принмать на вход строку и выводить на печать по формату: Цифра пробел количество.

 * Dmitry Alekseev
 * D01-031
 *  */

#include <stdio.h>
#include <string.h>

#define NUM 10

void print_digit(char st[])
{
    int arr[NUM]= {0};
    int k = 0;
    int i = 0;
    do
    {
        if('0'<=st[i] && st[i]<='9')
        {
            k = st[i]-'0';
            arr[k]+=1;
        }
        i++;

    }
    while(i<strlen(st));
    for(int i=0; i<NUM; i++)
    {
        if (arr[i])
        {
            printf("%d %d\n", i, arr[i]);
        }
    }
}

//~ int main(void)
//~ {
    //~ char st[1000];
    //~ int i=0;
    //~ char c;
    //~ while( (c=getchar())!='\n' )
        //~ st[i++]=c;
    //~ st[i]='\0';
    //~ print_digit(st);
    //~ return 0;
//~ }


