#include <stdio.h>

void swap(int* a, int* b, int*c)
{
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main()
{
    int a = 3, b = 6, c = 9;
    swap(&a, &b, &c);
    printf("%d %d %d", a, b, c);
    return 0;
}
