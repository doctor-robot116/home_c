/**
Alekseev Dmitry
Дано натуральное число N.
Выведите все его цифры по одной, в прямом порядке, разделяя их пробелами или новыми строками.
Необходимо реализовать рекурсивную функцию. void print_num(int num)
*/

#include <stdio.h>
void print_num(int num)
{
    if (num < 10)
    {
        printf("%d ",num); //прямой ход
        return;
    }
    print_num(num/10);
    printf("%d ", num%10);
}

//printf("%d ",n); //обратный ход

int main(void)
{
    int num;
    scanf("%d",&num);
    print_num(num);
    return 0;
}
