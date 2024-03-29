#include <stdio.h>

int main()
{
    int *p;
    int a[3];
    for(int i = 0; i < 3; i++){
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    for(int i = 0; i < 3; i++){
        p = &a[i];
        printf("Gia tri cua a[%d] la: %d\n", i+1, *p);
    }
    return 0;
}
