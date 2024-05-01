#include <stdio.h>
int main()
{
    int num, digit, nextNum;
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        nextNum = num / 10;
        while (nextNum > 0)
        {
            if (digit == nextNum % 10)
            {
                printf("YES\n");
                return 0;
            }
            nextNum = nextNum / 10;
        }
        num = num / 10;
    }
    printf("NO\n");
    return 0;
}
