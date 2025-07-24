#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int n;
int m;

int graph[MAX][MAX];
int size[MAX];

void addEdge(int u, int v) {
    graph[u][size[u]++] = v;
    graph[v][size[v]++] = u;
}

void printGraph() {
    for (int i = 0; i < n; i++) {
        printf("%d:", i);
        for (int j = 0; j < size[i]; j++) {
            printf(" %d", graph[i][j]);
        }
        printf("\n");
    }
}

int main() {
    printf("Nhap so dinh: ");
    scanf("%d", &n);
    printf("Nhap so canh: ");
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        int u, v;
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }

    printf("\nDanh sach ke:\n");
    printGraph();

    return 0;
}
