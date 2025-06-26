#include <stdio.h>

int giaithua(int n) {
    if (n <= 1)
        return 1;
    return n * giaithua(n - 1);
}

int main() {
    int n;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Khong hop le\n");
    } else {
        int kq = giaithua(n);
        printf("%d\n", kq);
    }
    return 0;
}


