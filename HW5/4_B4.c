#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int n;
    n=0;
    scanf("%d",&n);
    if ((n>99)&&(n<1000))
        printf("YES");
    else
        printf("NO");
    return 0;
}

