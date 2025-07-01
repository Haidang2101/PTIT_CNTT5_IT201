#include <stdio.h>

void selectionSort(int arr[], int n) {
    int minIndex;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    while (n <= 0 || n > 1000) {
        printf("Input khong hop le vui long nhap lai\n");
        printf("Nhap so luong phan tu: ");
        scanf("%d", &n);
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Mang truoc khi duoc sap xep: \n");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Mang sau khi duoc sap xep: \n");
    printArray(arr, n);

    return 0;
}