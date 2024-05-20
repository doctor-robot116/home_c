//Cоставить функцию, модуль числа и привести пример ее использования.

#include <stdio.h>
#include <stdlib.h>

void modul()
{
    int i;
    scanf ("%d", &i);
    int result = abs (i);
    printf ("%d\n", result);
}
int main (void)
{
    modul();
    return 0;
}
