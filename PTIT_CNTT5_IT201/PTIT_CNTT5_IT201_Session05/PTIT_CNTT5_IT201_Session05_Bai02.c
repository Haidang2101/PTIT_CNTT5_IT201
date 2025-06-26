#include <stdio.h>

int tinhTong(int n) {
    if (n <= 0) return 0;
    return n + tinhTong(n - 1);
}

int chuoiThanhSo(char s[]) {
    int i = 0, n = 0;
    while (s[i] == ' ') i++;
    while (s[i] >= '0' && s[i] <= '9') {
        n = n * 10 + (s[i] - '0');
        i++;
    }
    return n;
}

int main() {
    char chuoi[100];
    printf("Nhap mot chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);
    int n = chuoiThanhSo(chuoi);
    if (n <= 0) {
        printf("Khong hop le\n");
    } else {
        printf("%d\n", tinhTong(n));
    }

    return 0;
}

