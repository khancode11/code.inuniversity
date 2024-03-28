//bai 10.6
#include <stdio.h>

void nhap_mang_a(int a[], int n){
    for (int i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
}
void nhap_mang_b(int b[], int n){
    for (int i = 0; i < n; i++){
        printf("Nhap phan tu b[%d]: ", i+1);
        scanf("%d", &b[i]);
    }
}
void so_sanh(int a[], int b[], int n){
    int k = 0;
        for (int i = 0; i < n; i++){
            if (a[k] != b[k]){
                printf("0");
                return 0;
            }
            k++;
        }
    printf("1");
}
int main()
{
    int n1, n2;

    printf("Nhap so luong phan tu mang a: ");
    scanf("%d", &n1);
    int a[n1];
    nhap_mang_a(a, n1);

    printf("Nhap so luong phan tu mang b: ");
    scanf("%d", &n2);
    int b[n2];
    nhap_mang_b(b, n2);

    if (n1 != n2){
        printf("0");
        return 0;
    }else{
        so_sanh(a, b, n1);
    }
    return 0;
}
