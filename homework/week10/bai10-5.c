//bai 10.5
#include <stdio.h>

void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
}

int tinh(int a[], int n)
{
    int tong = 0;
    for (int i = 1; i < n-1; i++){
        if (a[i] > a[i-1] && a[i] > a[i+1]){
            tong += a[i];
        }
    }
    return tong;
}

int main()
{
    int n;
    printf("Nhap so luong phan tu cua day: ");
    scanf("%d", &n);
    int a[n];
    nhapMang(a, n);
    printf("Tong cac cuc dai dia phuong cua day la: %d", tinh(a, n));
    return 0;
}
