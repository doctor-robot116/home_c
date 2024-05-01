#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int a,b,i,sum;
    a=0;
    sum=0;
    scanf("%d%d",&a,&b);
    for (i=a; i<=b; i++)
    {
        sum=sum+i*i;
    }
    printf("%d",sum);
    return 0;
}

