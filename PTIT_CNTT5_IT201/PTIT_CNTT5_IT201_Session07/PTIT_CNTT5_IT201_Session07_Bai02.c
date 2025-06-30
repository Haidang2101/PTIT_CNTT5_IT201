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

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    while (n <= 0 || n > 1000) {
        printf("Invalid input\n");
        printf("Enter the size of the array: ");
        scanf("%d", &n);
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter array element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Before: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    selectionSort(arr, n);

    printf("After: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
