#include <stdio.h>

int main()
{
    int x,y;
    x=0;
    y=1;
    scanf("%d",&x);    
    while (x>0)
    {
        y=y*(x%10);
        x=(x-x%10)/10;          
    }
    printf("%d\n",y);
    return 0;
}
