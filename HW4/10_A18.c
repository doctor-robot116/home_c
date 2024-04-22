#include <stdio.h>

int main(void)
{
    int A,B;
    scanf("%d%d",&A,&B);
    {
        if (A>B)
            printf("Above\n");
        else if (A<B)
            printf("Less\n");
        else
            printf("Equal\n");
    }
    return 0;
}

