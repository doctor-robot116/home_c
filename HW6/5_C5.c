#include <stdio.h>

int sum(int N) // функция sum
{
    int result = 0; // инициализируем переменную 'result' значением 0
    for (int i = 1; i <= N; i++)
    {
        result+=i;
    }
    return result;
}

int main(void)
{
    int sum(int N);
    int N;
    scanf("%d", &N);
    int result = sum(N);
    printf("%d\n", result);
    return 0;
}
