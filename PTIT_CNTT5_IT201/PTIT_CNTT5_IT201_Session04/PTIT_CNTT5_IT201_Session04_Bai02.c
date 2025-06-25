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

    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    printf("%d\n", maxIndex);

    return 0;
}
