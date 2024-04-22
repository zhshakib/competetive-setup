#include <stdio.h>

#define MAX_SIZE 100

struct Queue {
  int front = 0;
  int rear = -1;
  int data[MAX_SIZE];
};

int isEmpty(Queue *s) { return s->rear < s->front; }
int isFull(Queue *s) { return s->rear == MAX_SIZE - 1; }

void push(Queue *s, int item) {
  if (isFull(s)) {
    printf("Queue overflow\n");
    return;
  }
  // add element at rear
  s->rear++;
  // insert item
  s->data[s->rear] = item;
}

void pop(Queue *s) {
  if (isEmpty(s)) {
    printf("Queue underflow\n");
    return;
  }
  // decrement top
  s->front++;
}

void printStack(Queue s) {
  for (int i = s.front; i <= s.rear; i++) {
    printf("%d ", s.data[i]);
  }
  printf("\n");
}

int main() {
  Queue mystack;
  push(&mystack, 1);
  push(&mystack, 2);
  push(&mystack, 3);
  printStack(mystack);
  pop(&mystack);
  printStack(mystack);
  pop(&mystack);
  printStack(mystack);
  return 0;
}
