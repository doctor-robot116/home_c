#include <stdio.h>
int main()
{
    int x,y,z,w,u;
    scanf("%d%d%d",&x,&y,&z);
    w=x+y+z;
    u=x*y*z;
    printf("%d+%d+%d=%d\n",x,y,z,w);
    printf("%d*%d*%d=%d",x,y,z,u);
    return 0;
}

