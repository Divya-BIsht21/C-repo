#include <stdio.h>
#define MAX_SIZE 100
typedef struct {
    int items[MAX_SIZE], front, rear;
    int ;
} CircularQueue;
void initQueue(CircularQueue* queue) {
    queue->front = -1;  queue->rear = -1;
}
int isFull(CircularQueue* queue) {
    return (queue->front == 0 && queue->rear == MAX_SIZE - 1) || (queue->front == queue->rear + 1);
}
int isEmpty(CircularQueue* queue) {
    return queue->front == -1;
}
void enqueue(CircularQueue* queue, int element) {
    if (isFull(queue)) {
        printf("Queue is full. Cannot enqueue element.\n");
        return;
    }
    if (queue->front == -1)
        queue->front = 0;
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->items[queue->rear] = element;
    printf("Enqueued: %d\n", element);
}
void dequeue(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty. Cannot dequeue element.\n");
        return;
    }
    printf("Dequeued: %d\n", queue->items[queue->front]);
    if (queue->front == queue->rear)
        initQueue(queue);
    else
        queue->front = (queue->front + 1) % MAX_SIZE;
}
void displayQueue(CircularQueue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty.\n");
        return;
    }
    int i = queue->front;
    printf("Queue elements: ");
    if (queue->front <= queue->rear) {
        while (i <= queue->rear)
            printf("%d ", queue->items[i++]);
    } else {
        while (i <= MAX_SIZE - 1)
            printf("%d ", queue->items[i++]);
        i = 0;
        while (i <= queue->rear)
            printf("%d ", queue->items[i++]);
    }
    printf("\n");
}
int main() {
    CircularQueue queue; initQueue(&queue);
    int size, i, element;
    printf("Enter the size of the circular queue: ");
    scanf("%d", &size);
    printf("Enter the elements to enqueue:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &element);
        enqueue(&queue, element);
    }
    displayQueue(&queue);
    printf("Dequeue how many elements? ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
        dequeue(&queue);
    displayQueue(&queue);
    return 0;
}

