#include <stdio.h>
#include <stdlib.h>
#define soHang 5
#define soCot 3

void batTatTheoCot(int a[soHang][soCot])
{
    int c;
    printf("Nhap cot muon bat tat: ");
    scanf("%d", &c);
    for(int i = 0; i < soHang; i++){
        a[i][c-1] = abs(1 - a[i][c-1]);
    }
}
void batTatTheoHang(int a[soHang][soCot])
{
    int c;
    printf("Nhap hang muon bat tat: ");
    scanf("%d", &c);
    for(int i = 0; i < soCot; i++){
        a[c-1][i] = abs(1 - a[c-1][i]);
    }
}

void batTatTheoViTri(int a[soHang][soCot])
{
    int i, j;
    printf("Nhap vi tri muon thay doi(i, j): ");
    scanf("%d%d", &i, &j);
    a[i-1][j-1] = abs(1 - a[i-1][j-1]);
}

void trangThaiHienThoi(int a[soHang][soCot])
{
    printf("Trang thai hien thoi cua dan bong den: \n");
    for (int i = 0; i < soHang; i++){
        for(int j = 0; j < soCot; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
int congSuatTieuThu(int a[soHang][soCot])
{
    int cs = 0;
    for (int i = 0; i < soHang; i++){
        for(int j = 0; j < soCot; j++){
            if ((i % 2 == 0) && (j % 2 == 0) && (a[i][j] == 1)){
                cs += 20;
            }else if((i % 2 != 0) && (j % 2 != 0) && (a[i][j] == 1)){
                cs += 10;
            }else if(a[i][j] == 1){
                cs += 15;
            }
        }
    }
    return cs;
}
int main()
{
    int a[soHang][soCot] = {};
    int k;
    do{
    //menu
    printf("CHUONG TRINH BAT TAT DEN: ");
    printf("\n1. Bat tat theo hang.");
    printf("\n2. Bat tat theo cot.");
    printf("\n3. Bat tat theo vi tri.");
    printf("\n4. Xem cong suat tieu thu cua dan den theo trang thai hien thoi.");
    printf("\nMoi ban chon: ");
    scanf("%d", &k);

    switch (k)
    {
    case 1:
        trangThaiHienThoi(a);
        batTatTheoHang(a);
        trangThaiHienThoi(a);
        break;
    case 2:
        trangThaiHienThoi(a);
        batTatTheoCot(a);
        trangThaiHienThoi(a);
        break;
    case 3:
        trangThaiHienThoi(a);
        batTatTheoViTri(a);
        trangThaiHienThoi(a);
        break;
    case 4:
        trangThaiHienThoi(a);
        printf("Cong suat tieu thu cua dan bong den la: %dW\n", congSuatTieuThu(a));
        break;
    default:
        break;
    }
    printf("Moi chon: ");
    printf("\n0. Tiep tuc thay doi trang thai bong den.");
    printf("\nAn phim khac de thoat.");
    printf("\nChon[?]: ");
    scanf("%d", &k);
    } while (k == 0);
    return 0;
}
