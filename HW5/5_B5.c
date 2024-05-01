#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n,sum = 0;
    do
    {
        scanf("%d",&n);
    }
    while(n<0);
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    printf("%d\n",sum);
    return 0;
}

