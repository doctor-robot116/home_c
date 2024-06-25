/*
* F2
* D01-031 Alekseev Dmitry
* Четные в начало
Написать только одну функцию, которая ставит в начало массива все четные элементы, а в конец – все нечетные. Не нарушайте порядок следования чисел между собой. Строго согласно прототипу:.
void sort_even_odd(int n, int a[])
* Input format - Функцийя принмате на вход целые числа
* Output format - Отсортированный исходный массив
*/

void sort_even_odd(int n, int a[])
{
    int even_cnt = 0;
    int sort_arr[n];
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            sort_arr[even_cnt++] = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sort_arr[even_cnt++] = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        a[i] = sort_arr[i];
    }
}
