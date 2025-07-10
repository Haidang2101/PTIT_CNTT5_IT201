#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *array;
    int front;
    int rear;
    int maxSize;
} Queue;

Queue *createQueue(int maxSize) {
    Queue *queue = (Queue *) malloc(sizeof(Queue));
    queue->maxSize = maxSize;
    queue->array = (int *) malloc(maxSize * sizeof(int));
    queue->front = 0;
    queue->rear = -1;
    return queue;
}

int isFull(Queue *queue) {
    return queue->rear == queue->maxSize - 1;
}

void enQueue(Queue *queue, int value) {
    if (isFull(queue)) {
        printf("Hang doi da day\n");
        return;
    }
    queue->rear++;
    queue->array[queue->rear] = value;

    printf("queue = {\n");
    printf("    array = [");
    if (queue->rear >= queue->front) {
        for (int i = queue->front; i <= queue->rear; i++) {
            printf("%d", queue->array[i]);
            if (i < queue->rear) {
                printf(", ");
            }
        }
    }
    printf("]\n");
    printf("    front = %d,\n", queue->front);
    printf("    rear = %d,\n", queue->rear);
    printf("    capacity = %d,\n", queue->maxSize);
    printf("}\n");
}

int main() {
    int maxSize;
    printf("Max size: ");
    scanf("%d", &maxSize);
    Queue *queue = createQueue(maxSize);

    printf("queue = {\n");
    printf("    array = [],\n");
    printf("    front = %d,\n", queue->front);
    printf("    rear = %d,\n", queue->rear);
    printf("    capacity = %d,\n", queue->maxSize);
    printf("}\n");

    int elments[maxSize];
    for (int i = 0; i < maxSize; i++) {
        printf("Moi ban nhap gia tri: ");
        scanf("%d", &elments[i]);
        enQueue(queue, elments[i]);
    }

    int value;
    printf("Ban muon thu nhap them phan tu: ");
    scanf("%d", &value);
    enQueue(queue, value);

    free(queue->array);
    free(queue);

    return 0;
}
