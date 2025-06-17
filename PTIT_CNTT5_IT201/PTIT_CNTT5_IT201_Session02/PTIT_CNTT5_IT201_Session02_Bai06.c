#include <stdio.h>

int main() {
    int n, pos, val;
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

    printf("Nhap vi tri muon chen (0 <= pos <= %d): ", n);
    scanf("%d", &pos);
    printf("Nhap gia tri muon chen: ");
    scanf("%d", &val);

    if (pos < 0 || pos > n) {
        printf("Khong hop le\n");
        return 1;
    }

    for (int i = n; i > pos; i--) {
        mang[i] = mang[i - 1];
    }

    mang[pos] = val;
    n++;

    printf("Mang sau khi chen: [");
    for (int i = 0; i < n; i++) {
        printf("%d", mang[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
