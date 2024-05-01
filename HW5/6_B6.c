#include <stdio.h>

int main()
{
    int a,b,num;
    scanf("%d",&a);
    num=0;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        if (a%10==b) num=1;
    }
    if (num==1) printf("YES");
    else if (num!=1) printf("NO");
    return 0;
}
