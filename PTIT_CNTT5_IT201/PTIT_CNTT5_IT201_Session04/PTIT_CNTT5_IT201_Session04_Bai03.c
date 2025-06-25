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

    int min = arr[0];
    int min_index = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            min_index = i;
        }
    }

    printf("Chi so cua phan tu nho nhat dau tien: %d\n", min_index);

    return 0;
}
