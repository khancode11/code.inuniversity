//bai 10.1
#include <stdio.h>
int luongMua[12];

void nhapMang(int lm[])
{
    printf("Nhap luong mua: \n");
    for (int i = 0; i < 12; i++){
        printf("Thang %d: ", i+1);
        scanf("%d", &luongMua[i]);
    }
}

void xuatMang(int lm[])
{
    printf("Luong mua cua cac thang la: ");
    for (int i = 0; i < 12; i++){
        printf("\nThang %d: %d", i+1, luongMua[i]);
    }
}

int main()
{
    nhapMang(luongMua);
    xuatMang(luongMua);
    return 0;
}
