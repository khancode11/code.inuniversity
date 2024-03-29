#include <stdio.h>

int main()
{
    int a[7] = {12, -355, 235, 47, 67, 943, 1222};
    for(int i = 0; i < 7; i++){
        printf("a[%d]: \t%p\t%p\n", i, a+i, &a[i]);
    }
    return 0;
}
