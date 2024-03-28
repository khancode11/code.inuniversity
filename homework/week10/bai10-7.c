//bai 10.7
#include <stdio.h>

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

    printf("Moi ban chon: \n1. Sap xep tang\n2. Sap xep giam\n");
    scanf("%d", &k);

    switch(k)
    {
    case 1:
        sapXepTang(a, n);
        break;
    case 2:
        sapXepGiam(a, n);
        break;
    }
    return 0;
}
