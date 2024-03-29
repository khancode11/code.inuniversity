#include <stdio.h>

int main()
{
    float x = 21, y = 27, z = 11;

    float *p;

    p = &x;
    *p += 100;
    p = &y;
    *p += 100;
    p = &z;
    *p += 100;
    printf("x = %f", x);
    printf("y = %f\n", y);
    printf("z = %f\n", z);


    return 0;
}
