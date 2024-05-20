#include <stdio.h>
int power(int N, int P)
{
    int result = 1;
    for (int i = 0; i < P; i++)
    {
        result *= N;
    }
    return result;
}
int main()
{
    int power(int N, int P);
    int N,P;
    scanf("%d %d", &N, &P);
    N = N % 1000;   // N по модулю не превышает 1000
    int result = power(N,P);
    printf("%d\n",result);
    return 0;
}
