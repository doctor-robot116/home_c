/**
Alekseev Dmitry
Рекурсивная печать от 1 до N
 */

#include <stdio.h>

void rec_func(int n)
{
    //   printf("%d ",n); //прямой ход
    if (n>1)
        rec_func(n-1);
    printf("%d ",n); //обратный ход

}
int main(void)
{
    int n;
    scanf("%d",&n);
    rec_func(n);
    return 0;
}
