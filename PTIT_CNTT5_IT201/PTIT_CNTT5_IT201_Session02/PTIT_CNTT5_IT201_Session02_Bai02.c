#include <stdio.h>

int main() {
    int n, so_can_dem;

    printf("Nhap so phan tu cua mang (1 <= n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    int mang[100];

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &mang[i]);
    }

    printf("Nhap so can dem: ");
    scanf("%d", &so_can_dem);

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] == so_can_dem) {
            dem++;
        }
    }

    printf("So %d xuat hien %d lan trong mang.\n", so_can_dem, dem);

    return 0;
}
