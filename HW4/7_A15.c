#include <stdio.h>

int main(void)
{
    int A,B,C,D;
    float E,F;
    A=0;
    C=0;
    B=0;
    D=0;
    E=0;
    F=0;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    E=(float)(D-B)/(C-A);
    F=(float)(B-E*A);
    printf("%.2f %.2f",E,F);
    return 0;
}

