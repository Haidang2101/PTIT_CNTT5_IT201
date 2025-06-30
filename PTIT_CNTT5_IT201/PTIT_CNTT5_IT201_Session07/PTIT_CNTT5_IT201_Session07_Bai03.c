#include <stdio.h>

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    while (n <= 0 || n > 1000) {
        printf("Invalid input, please enter a number between 1 and 1000.\n");
        printf("Enter number of elements: ");
        scanf("%d", &n);
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter %d elements: ", i);
        scanf("%d", &arr[i]);
    }

    printf("before: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    InsertionSort(arr, n);

    printf("after: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;

}
