//bai 10.4
#include <stdio.h>
int nB, nC;

void nhapMang(int a[], int n)
{
    for (int i = 0; i < n; i++){
        printf("Nhap phan tu a[%d]: ", i+1);
        scanf("%d", &a[i]);
    }
}

void chepMang(int a[], int b[], int c[], int n)
{
    int kD = 0, kA = 0;
    for (int i = 0; i < n; i++){
        if (a[i]>0){
            b[kD] = a[i];
            kD++;
        }else if(a[i]<0){
            c[kA] = a[i];
            kA++;
        }
    }
    nB = kD;
    nC = kA;
}

void inB(int b[], int n)
{
    printf("Mang B: ");
    for (int i = 0; i < n; i++){
        printf("%d ", b[i]);
    }
}

void inC(int c[], int n)
{
    printf("\nMang C: ");
    for (int i = 0; i < n; i++){
        printf("%d ", c[i]);
    }
}

int main()
{
    int n;
    do{
        printf("Nhap N(n<=10): ");
        scanf("%d", &n);
    } while (n>10);
    int a[n], b[n], c[n];
    nhapMang(a, n);
    chepMang(a, b, c, n);
    inB(b, nB);
    inC(c, nC);
    return 0;
}
