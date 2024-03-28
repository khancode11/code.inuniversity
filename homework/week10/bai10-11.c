#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int a, b;
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        printf("%d\n", a+b);
    }
    return 0;
}
