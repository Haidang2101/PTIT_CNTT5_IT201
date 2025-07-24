#include <stdio.h>
#define MAX 100

int n;
int graph[MAX][MAX];

void initMatrix() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            graph[i][j] = 0;
        }
    }
}

void addEdge(int graph[MAX][MAX], int u, int v) {
    graph[u][v] = 1;
    graph[v][u] = 1;
}

// In ma trận kề
void printGraph() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("Nhap so dinh: ");
    scanf("%d", &n);

    initMatrix();

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 2);
    addEdge(graph, 3, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 3, 4);

    printf("Ma tran ke:\n");
    printGraph();

    return 0;
}