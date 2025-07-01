#include <stdio.h>
#include <stdlib.h>

int linearSearch(int arr[], int n, int checkNum) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == checkNum) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    while (n <= 0 || n > 1000) {
        printf("Input khong hop le vui long nhap lai !!!!");
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int checkNum;
    printf("Ban muon tim so nao trong mang: ");
    scanf("%d", &checkNum);

    int location = linearSearch(arr, n, checkNum);
    if (location == -1) {
        printf("Phan tu khong ton tai");
    } else {
        printf("Vi tri thu: %d", location + 1);
    }

    return 0;
}
