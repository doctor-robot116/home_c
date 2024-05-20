#include <stdio.h>

unsigned int middle(unsigned int a, unsigned int b)
{
    return (a + b) / 2;
}

int main(void)
{
    unsigned int a, b;
    scanf("%u %u", &a, &b);
    printf("%u\n",  middle(a, b));
    return 0;
}


