#include <stdio.h>
int main()
{
    int a, count = 0, digit;
    scanf("%d", &a);
    while (a > 0)
    {
        digit = a % 10;
        if (digit == 9)
        {
            count++;
        }
        a = a / 10;
    }
    if (count == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
