#include <stdio.h>

#define MAX_LEN 100
int Queue[MAX_LEN];
int front = 0;
int rear = -1;

int isEmpty() { return rear < front; }
int isFull() { return rear == MAX_LEN - 1; }

void enqueue(int item) {
  if (isFull()) {
    printf("Queue overflow\n");
    return;
  } else {
    Queue[++rear] = item;
  }
}

void dequeue() {
  if (isEmpty()) {
    printf("Queue underflow\n");
    return;
  } else {
    Queue[front++];
  }
}

void printQueue() {
  for (int i = front; i <= rear; i++) {
    printf("%d ", Queue[i]);
  }
  printf("\n");
}

void peek() {
  if (isEmpty()) {
    printf("Queue is empty\n");
  } else {
    printf("%d\n", Queue[front]);
  }
}

int main() {
  enqueue(1);
  enqueue(2);
  enqueue(3);
  enqueue(4);
  printQueue();
  dequeue();
  printQueue();
  dequeue();
  printQueue();
  dequeue();
  printQueue();
  dequeue();
  return 0;
}
