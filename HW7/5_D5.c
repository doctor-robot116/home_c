/**
Alekseev Dmitry
Перевести натуральное число в двоичную систему счисления. Необходимо реализовать рекурсивную функцию.
Формат входных данных:
Целое не отрицательное число в десятичной системе счисления
Формат результата:
Целое число в двоичной системе счисления
*/

#include <stdio.h>
void binary_num(int num)
{
    if (num == 0)
    {
        //  printf("%lu ",num); //прямой ход
        printf("%d",num);
        return;
    }
    binary_num(num/2);
    printf("%d",num%2);

}
int main(void)
{
    int num;
    scanf("%d",&num);
    binary_num(num);
    return 0;
}
