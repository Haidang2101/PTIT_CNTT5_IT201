#include <stdio.h>

int main() {
    int n;

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le\n");
        return 1;
    }

    int arr[n];

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Chi so cua phan tu dau tien co gia tri %d la: %d\n", x, i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Khong tim thay phan tu\n");
    }

    return 0;
}
