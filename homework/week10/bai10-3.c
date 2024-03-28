//bai 10.3
#include <stdio.h>
#include <stdlib.h>

void sapXepTang(int a[], int n)
{
    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i]>a[j]){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    printf("Mang sap xep tang: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sapXepGiam(int a[], int n)
{
    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i]<a[j]){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    printf("Mang sap xep giam: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sapXepGiamTheoGTTD(int a[], int n)
{
    for (int i = 0; i < n-1; i++){
        for (int j = i + 1; j < n; j++){
            if (abs(a[i])<abs(a[j])){
                a[i] = a[i] + a[j];
                a[j] = a[i] - a[j];
                a[i] = a[i] - a[j];
            }
        }
    }
    printf("Mang sap xep giam theo gia tri tuyet doi: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}


int main()
{
    int k, n, a[30];
    printf("Nhap N: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    sapXepTang(a, n);
    sapXepGiam(a, n);
    sapXepGiamTheoGTTD(a, n);
    return 0;
}
