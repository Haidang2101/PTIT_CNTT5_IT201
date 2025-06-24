#include <stdio.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So luong khong hop le.\n");
        return 1;
    }

    int a[100];
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int maxCount = 0;
    int result = a[0];

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            result = a[i];
        }
    }

    printf("Phan tu xuat hien nhieu nhat: %d\n", result);
    return 0;
}
