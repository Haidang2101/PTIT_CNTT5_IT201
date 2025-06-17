#include <stdio.h>
int main() {
    int n;
    int temp = 0;
    int arr[] = {1, 2, 2, 3, 4, 3, 5, 2, 6, 7, 7, 8, 9, 10};
    printf(" Co mang nhu sau: ");
    for ( int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        printf(" %d", arr[i]);
    }
    printf(" Nhap so muon kiem tra so lap: ");
    scanf("%d", &n);
    for (int j = 0; j < sizeof(arr) / sizeof(arr[0]); j++) {
        if (arr[j] == n) {
            temp++;
        }
    }
    printf("co so lan lap la: %d\n",temp);
    return 0;
}
//độ phức tạp là O(n);