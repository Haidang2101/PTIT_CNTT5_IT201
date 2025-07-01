#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    while (n <= 0 || n > 1000) {
        printf("Input khong hop le");
        printf("\nNhap so luong phan tu: ");
        scanf("%d", &n);
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printf("Mang sau khi sap xep la: \n");
    printArray(arr, n);
    return 0;
}