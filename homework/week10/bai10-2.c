//bai10.2
#include <stdio.h>

void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
}

float tinh(int a[], int n)
{
    int dAm = 0, dKhong = 0;
    int sAm = 0, sDuong = 0;
    for (int i = 0; i < n; i++){
        if (a[i] < 0){
            sAm += a[i];
            dAm++;
        } else if (a[i]>0){
            sDuong += a[i];
        } else{
            dKhong++;
        }
    }
    if (dAm == 0){
        printf("Khong co so am nao!");
    } else{
        printf("Trung binh cong cac so am trong mang la: %.2f", (float)sAm/dAm);
    }
    printf("\nTong cac so duong trong mang la: %d", sDuong);
    if (dKhong == 0){
        printf("Khong co so khong nao trong mang!");
    } else{
        printf("\nCo %d so \"0\" trong mang!", dKhong);
    }
}

int tongSoDuong(int a[], int n)
{

}

int main()
{
    int n;
    do{
        printf("Nhap N(n<10): ");
        scanf("%d", &n);
    } while (n>=10);
    int a[n];
    nhapMang(a, n);
    tinh(a, n);
    return 0;
}
