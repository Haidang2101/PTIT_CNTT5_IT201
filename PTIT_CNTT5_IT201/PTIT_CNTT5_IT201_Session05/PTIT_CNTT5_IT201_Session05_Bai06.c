#include <stdio.h>

int sum(int arr[], int n) {
    if (n < 1) return 0;
    return arr[n - 1] + sum(arr, n - 1);
}

int main() {
    int n;
    printf("Moi ban nhap vao so nguyen bat ky: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So khong hop le!\n");
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap so nguyen thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int tong = sum(arr, n);
    printf("Tong cac so trong mang la: %d\n", tong);

    return 0;
}
