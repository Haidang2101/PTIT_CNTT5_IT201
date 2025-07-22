#include <stdio.h>
#include <stdlib.h>

// Khai báo cấu trúc Node
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Hàm tạo một node mới với dữ liệu từ người dùng nhập
Node* taoNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Khong du bo nho!\n");
        exit(1);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Hàm hiển thị thông tin một node
void hienThiNode(Node* node) {
    if (node == NULL) {
        printf("Node khong ton tai!\n");
        return;
    }
    printf("node = {\n");
    printf("   data: %d,\n", node->data);
    printf("   left->%s,\n", node->left == NULL ? "NULL" : "not NULL");
    printf("   right->%s\n", node->right == NULL ? "NULL" : "not NULL");
    printf("}\n");
}

int main() {
    int so;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    Node* node = taoNode(so);

    hienThiNode(node);

    // Giai phong bo nho
    free(node);

    return 0;
}

