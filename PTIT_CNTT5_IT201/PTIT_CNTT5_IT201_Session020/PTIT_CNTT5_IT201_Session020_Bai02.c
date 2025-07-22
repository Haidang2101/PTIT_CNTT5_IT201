#include <stdio.h>
#include <stdlib.h>

// Cấu trúc cây nhị phân
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// Hàm tạo node mới
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

// Duyệt NLR (trước)
void duyetTruoc(Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        duyetTruoc(root->left);
        duyetTruoc(root->right);
    }
}

// Duyệt LNR (giữa)
void duyetGiua(Node* root) {
    if (root != NULL) {
        duyetGiua(root->left);
        printf("%d ", root->data);
        duyetGiua(root->right);
    }
}

// Duyệt LRN (sau)
void duyetSau(Node* root) {
    if (root != NULL) {
        duyetSau(root->left);
        duyetSau(root->right);
        printf("%d ", root->data);
    }
}

// Duyệt theo tầng (sử dụng queue đơn giản bằng mảng)
#define MAX 100
void duyetTheoTang(Node* root) {
    if (root == NULL) return;

    Node* queue[MAX];
    int front = 0, rear = 0;

    queue[rear++] = root;

    while (front < rear) {
        Node* current = queue[front++];
        printf("%d ", current->data);

        if (current->left != NULL) {
            queue[rear++] = current->left;
        }
        if (current->right != NULL) {
            queue[rear++] = current->right;
        }
    }
}

// Hàm chính
int main() {
    // Tạo cây như mẫu bạn đưa
    Node* root = taoNode(4);
    root->left = taoNode(2);
    root->right = taoNode(7);
    root->left->left = taoNode(3);
    root->left->right = taoNode(5);
    root->right->right = taoNode(8);

    printf("Duyet NLR (Truoc): ");
    duyetTruoc(root);
    printf("\n");

    printf("Duyet LNR (Giua): ");
    duyetGiua(root);
    printf("\n");

    printf("Duyet LRN (Sau): ");
    duyetSau(root);
    printf("\n");

    printf("Duyet theo tang (Level Order): ");
    duyetTheoTang(root);
    printf("\n");

    return 0;
}
