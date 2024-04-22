#include <stdio.h>

int main(void)
{
    int n,d1,d2,d3;
    scanf("%d",&n);
    if (n<0) n=-n;
    d1=n%10;    //единица
    d2=(n/10)%10;   //десятка
    d3=(n/100)%10;   //сотка
    if ((d1>=d2)&&(d1>=d3))
        printf("%d",d1);
    else if ((d2>=d1)&&(d2>=d3))
        printf("%d",d2);
    else
        printf("%d",d3);
    return 0;
}
