#include <stdio.h>

int main(void)
{
    int A,B,C,max,sred,min;
    scanf("%d%d%d",&A,&B,&C);
    {
        if ((A>B)&&(A>C))
            max=A;
        else if ((B>A)&&(B>C))
            max=B;
        else
            max=C;
    }
    {
        if ((A<B)&&(A<C))
            min=A;
        else if ((B<A)&&(B<C))
            min=B;
        else
            min=C;
    }
    {
        if ((A!=max)&&(A!=min))
            sred=A;
        else if
        ((B!=max)&&(B!=min))
            sred=B;
        else
            sred=C;
    }
    {
        if
        (((A==min)&&(B==sred)&&(C==max))&&((min!=max)&&(min!=sred)&&(sred!=max)))
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

