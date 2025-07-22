#include <stdio.h>
#include <stdlib.h>

// Cấu trúc node
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Tạo node mới
Node* taoNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Cấu trúc hàng đợi để duyệt theo level
typedef struct QueueNode {
    Node* treeNode;
    struct QueueNode* next;
} QueueNode;

typedef struct Queue {
    QueueNode* front;
    QueueNode* rear;
} Queue;

// Khởi tạo hàng đợi
void initQueue(Queue* q) {
    q->front = q->rear = NULL;
}

// Kiểm tra hàng đợi rỗng
int isEmpty(Queue* q) {
    return q->front == NULL;
}

// Thêm phần tử vào hàng đợi
void enqueue(Queue* q, Node* node) {
    QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
    temp->treeNode = node;
    temp->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = temp;
    } else {
        q->rear->next = temp;
        q->rear = temp;
    }
}

// Lấy phần tử khỏi hàng đợi
Node* dequeue(Queue* q) {
    if (isEmpty(q)) return NULL;
    QueueNode* temp = q->front;
    Node* node = temp->treeNode;
    q->front = q->front->next;
    if (q->front == NULL) q->rear = NULL;
    free(temp);
    return node;
}

// Thêm node mới vào cây theo thứ tự từng tầng
void themNode(Node* root, int value) {
    if (root == NULL) return;

    Queue q;
    initQueue(&q);
    enqueue(&q, root);

    while (!isEmpty(&q)) {
        Node* temp = dequeue(&q);

        if (temp->left == NULL) {
            temp->left = taoNode(value);
            break;
        } else {
            enqueue(&q, temp->left);
        }

        if (temp->right == NULL) {
            temp->right = taoNode(value);
            break;
        } else {
            enqueue(&q, temp->right);
        }
    }
}

// Duyệt cây theo thứ tự trước (preorder)
void duyetTruoc(Node* root) {
    if (root == NULL) return;
    printf("%d ", root->data);
    duyetTruoc(root->left);
    duyetTruoc(root->right);
}

int main() {
    // Tạo cây mẫu như hình đầu: 2 -> 3, 4 -> 5
    Node* root = taoNode(2);
    root->left = taoNode(3);
    root->right = taoNode(4);
    root->left->left = taoNode(5);

    printf("Cay truoc khi them:\n");
    duyetTruoc(root);  // Output: 2 3 5 4

    // Thêm giá trị mới vào cây
    int value;
    printf("\nNhap gia tri muon them: ");
    scanf("%d", &value);
    themNode(root, value);

    printf("Cay sau khi them:\n");
    duyetTruoc(root);

    return 0;
}

