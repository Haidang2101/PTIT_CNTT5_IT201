#include <stdio.h>

int tinhTong(int first, int second) {
    if (first > second) return 0;
    return first + tinhTong(first + 1, second);
}

int main() {
    int firstNum, secondNum;

    printf("nhap hai so nguyen duong: ");
    scanf("%d %d", &firstNum, &secondNum);

    if (firstNum <= 0 || secondNum <= 0 || firstNum > secondNum) {
        printf("khong hop le\n");
    } else {
        int tong = tinhTong(firstNum, secondNum);
        printf("%d\n", tong);
    }

    return 0;
}
