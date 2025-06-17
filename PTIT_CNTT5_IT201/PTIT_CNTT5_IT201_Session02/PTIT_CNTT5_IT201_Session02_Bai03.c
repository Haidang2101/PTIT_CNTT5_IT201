#include <stdio.h>

int main() {
    int n;
    int mang[100];

    printf("Nhap so phan tu cua mang (1 <= n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &mang[i]);
    }

    for (int i = 0; i < n / 2; i++) {
        int tam = mang[i];
        mang[i] = mang[n - 1 - i];
        mang[n - 1 - i] = tam;
    }

    printf("Mang sau khi dao nguoc: [");
    for (int i = 0; i < n; i++) {
        printf("%d", mang[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    return 0;
}
