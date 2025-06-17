#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang (1 <= n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le.\n");
        return 1;
    }

    int *mang = (int *)malloc(n * sizeof(int));

    if (mang == NULL) {
        printf("Khong cap phat duoc bo nho.\n");
        return 1;
    }

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &mang[i]);
    }

    int max = mang[0];
    for (int i = 1; i < n; i++) {
        if (mang[i] > max) {
            max = mang[i];
        }
    }

    printf("Phan tu lon nhat la: %d\n", max);

    free(mang);

    return 0;
}
