#include <stdio.h>
void swap(int* x, int* y, int*z)
{
    int temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}
int main()
{
    int x = 3, y = 6, z = 9;
    int *p, *q, *r;
    p = &x;
    q = &y;
    r = &z;
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
    swap(x, y, z);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    printf("p = %p\n", p);
    printf("q = %p\n", q);
    printf("r = %p\n", r);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);
    printf("*r = %d\n", *r);
    return 0;
}
