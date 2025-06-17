#include <stdio.h>

int main() {
    int n, vi_tri, gia_tri_moi;
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

    printf("Nhap vi tri muon sua (0 <= vi_tri < %d): ", n);
    scanf("%d", &vi_tri);

    if (vi_tri < 0 || vi_tri >= n) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    printf("Nhap gia tri moi: ");
    scanf("%d", &gia_tri_moi);

    mang[vi_tri] = gia_tri_moi;

    printf("Mang sau khi cap nhat: [");
    for (int i = 0; i < n; i++) {
        printf("%d", mang[i]);
        if (i < n - 1) printf(", ");
    }
    printf("]\n");

    return 0;
}
