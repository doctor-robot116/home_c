#include <stdio.h>

int main(void)
{
    int a,b,c,d,e,max,min,sum;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    {
        if ((a>=b)&&(a>=c)&&(a>=d)&&(a>=e))
            max=a;
        else if ((b>=a)&&(b>=c)&&(b>=d)&&(b>=e))
            max=b;
        else if ((c>=a)&&(c>=b)&&(c>=d)&&(c>=e))
            max=c;
        else if ((d>=a)&&(d>=b)&&(d>=c)&&(d>=e))
            max=d;
        else
            max=e;
    }
    {
        if ((a<=b)&&(a<=c)&&(a<=d)&&(a<=e))
            min=a;
        else if ((b<=a)&&(b<=c)&&(b<=d)&&(b<=e))
            min=b;
        else if ((c<=a)&&(c<=b)&&(c<=d)&&(c<=e))
            min=c;
        else if ((d<=a)&&(d<=b)&&(d<=c)&&(d<=e))
            min=d;
        else
            min=e;
    }
    sum=min+max;
    printf("%d",sum);
    return 0;
}

