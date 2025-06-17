#include <stdio.h>

int main() {
    int n, pos;
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

    printf("Nhap vi tri muon xoa (0 <= pos < %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Khong hop le\n");
        return 1;
    }

    for (int i = pos; i < n - 1; i++) {
        mang[i] = mang[i + 1];
    }
    n--;

    printf("Mang sau khi xoa: [");
    for (int i = 0; i < n; i++) {
        printf("%d", mang[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
