#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int* array;
    int front;
    int rear;
    int maxSize;
} Queue;

Queue* createQueue(int maxSize) {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->maxSize = maxSize;
    queue->array = (int*)malloc(maxSize * sizeof(int));
    queue->front = 0;
    queue->rear = -1;
    return queue;
}

int isFull(Queue* queue) {
    return queue->rear == queue->maxSize - 1;
}

void enqueue(Queue* queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }
    queue->rear++;
    queue->array[queue->rear] = value;
    printf("queue = {\n");
    printf("    array = [");
    if (queue->rear >= queue->front) {
        for (int i = 0; i <= queue->rear; i++) {
            printf("%d", queue->array[i]);
            if (i < queue->rear) {
                printf(", ");
            }
        }
    }
    printf("],\n");
    printf("    front = %d,\n", queue->front);
    printf("    rear = %d,\n", queue->rear);
    printf("    capacity = %d\n",queue->maxSize);
    printf("}\n");
}

int isEmpty(Queue* queue) {
    return queue->rear < queue->front;
}

int deQueue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("queue is empty\n");
        printf("queue = {\n");
        printf("    array = [],\n");
        printf("    front = %d,\n", queue->front);
        printf("    rear = %d,\n", queue->rear);
        printf("    capacity = %d\n", queue->maxSize);
        printf("}\n");
        return -1;
    }

    int value = queue->array[queue->front];
    queue->front++;

    printf("return value = %d;\n", value);
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
    printf("],\n");
    printf("    front = %d,\n", queue->front);
    printf("    rear = %d,\n", queue->rear);
    printf("    capacity = %d\n", queue->maxSize);
    printf("}\n");

    return value;
}

int main() {
    int maxSize;
    printf("Enter the maximum size of the queue: ");
    scanf("%d", &maxSize);

    Queue* queue = createQueue(maxSize);

    int element[maxSize];
    for (int i = 0; i < maxSize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &element[i]);
        enqueue(queue, element[i]);
    }

    printf("\n");
    deQueue(queue);

    return 0;
}
