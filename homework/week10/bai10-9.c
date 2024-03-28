#include <stdio.h>
int n;

void inMang(int a[n][n]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
void nhapMang(int a[n][n], int b[n][n]){
    printf(">NHAP MA TRAN A: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Nhap phan tu [%d][%d]: ", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf(">NHAP MA TRAN B: \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Nhap phan tu [%d][%d]: ", i+1, j+1);
            scanf("%d", &b[i][j]);
        }
    }
}
void congMaTran(int a[n][n], int b[n][n], int c[n][n]){
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
        c[i][j] = a[i][j] + b[i][j];
    }
}
void truMaTran(int a[n][n], int b[n][n], int c[n][n]){
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
        c[i][j] = a[i][j] - b[i][j];
    }
}
void nhanMaTran(int a[n][n], int b[n][n], int c[n][n]){
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++){
        c[i][j] = a[i][j] * b[i][j];
    }
}

int main()
{
    //menu
    int k;
    printf("Chuong trinh tinh ma tran: ");
    printf("\n1. Cong ma tran.");
    printf("\n2. Tru ma tran.");
    printf("\n3. Nhan ma tran.");
    printf("\nMoi chon [1/2/3]: ");
    scanf("%d", &k);

    printf("Nhap N: ");
    scanf("%d", &n);
    int a[n][n], b[n][n], c[n][n];

    switch(k)
    {
    case 1:
        nhapMang(a, b);
        congMaTran(a, b, c);
        inMang(c);
        break;
    case 2:
        nhapMang(a, b);
        truMaTran(a, b, c);
        inMang(c);
        break;
    case 3:
        nhapMang(a, b);
        nhanMaTran(a, b, c);
        inMang(c);
        break;
    }
    return 0;
}
