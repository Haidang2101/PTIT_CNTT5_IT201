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

int main() {
    int maxSize = 5;
    Queue *queue = createQueue(maxSize);

    printf("Hang doi da duoc khoi tao:\n");
    printf("maxSize = %d\n", queue->maxSize);
    printf("front = %d\n", queue->front);
    printf("rear = %d\n", queue->rear);

    free(queue->array);
    free(queue);

    return 0;
}
