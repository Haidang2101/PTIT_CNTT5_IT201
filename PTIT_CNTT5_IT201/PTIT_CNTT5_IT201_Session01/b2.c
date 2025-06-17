#include <stdio.h>

void printDouble(int n) {
    int i=1;
    while(i<n) {
        printf("%d\n",i);
        i *= 2;
    }
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    printf("Cac so tang gap doi tu 1 den n:\n");
    printDouble(n);

    return 0;
}
//  O(log n)