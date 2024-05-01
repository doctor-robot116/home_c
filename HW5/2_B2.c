#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int a,b,i;
    a=0;
    scanf("%d%d",&a,&b);
    for(i=a; i<=b; i++)
    {
        printf("%d ",i*i);
    }
    return 0;
}

