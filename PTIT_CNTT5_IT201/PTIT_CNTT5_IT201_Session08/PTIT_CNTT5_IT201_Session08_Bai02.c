#include <stdio.h>


int binarySearch(int arr[], int l, int r, int checkNum) {
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == checkNum) {
            return mid + 1;
        }
        if (arr[mid] < checkNum) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return -1;
}


void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    while (n <= 0 || n > 1000) {
        printf("Input khong hop le, vui long nhap lai\n");
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

    sort(arr, n);

    int location = binarySearch(arr, 0, n - 1, checkNum);
    if (location == -1) {
        printf("Phan tu khong ton tai trong mang.\n");
    } else {
        printf("Phan o tai vi tri %d\n", location);
    }

    return 0;
}