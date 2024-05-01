#include <stdio.h>
int main()
{
    int a, digit;
    scanf("%d", &a);
    while (a > 0)
    {
        digit = a % 10;
        if ((digit % 2 != 0)&&(a % 2 != 0))
        {
            printf("NO\n");
            return 0;
        }
        a = a / 10;

    }
    printf("YES\n");
    return 0;
}
