/**
Alekseev Dmitry
Составить рекурсивную функцию, которая определяет сумму всех чисел от 1 до N
 */

#include <stdio.h>

void print_n_sum(int n, int m, int sum)
{
    if (m <= n)
    {
        sum += m;
        print_n_sum(n,++m,sum);
    } else {
        printf("%d", sum);
    }
}

int main( void ) {
    int n;
    scanf("%d", &n);
    print_n_sum(n, 1, 0);
    return 0;
}
