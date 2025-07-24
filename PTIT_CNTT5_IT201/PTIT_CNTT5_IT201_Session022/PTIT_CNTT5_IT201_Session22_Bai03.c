#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* adjList[MAX];

// Hàm tạo node mới
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void addEdge(int u, int v) {
    Node* newNode = createNode(v);
    newNode->next = adjList[u];
    adjList[u] = newNode;
}

void convertToAdjList(int matrix[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        adjList[i] = NULL;
        for (int j = n - 1; j >= 0; j--) {
            if (matrix[i][j] == 1) {
                addEdge(i, j);
            }
        }
    }
}

void printAdjList(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d:", i);
        Node* temp = adjList[i];
        while (temp != NULL) {
            printf(" %d ->", temp->data);
            temp = temp->next;
        }
        printf(" NULL\n");
    }
}

int main() {
    int n;
    int matrix[MAX][MAX];

    printf("Nhap so dinh: ");
    scanf("%d", &n);

    printf("Nhap ma tran ke:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    convertToAdjList(matrix, n);
    printf("\nDanh sach ke:\n");
    printAdjList(n);

    return 0;
}
