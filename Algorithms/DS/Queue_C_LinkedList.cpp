#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  Node *next;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;

  newNode->next = NULL;

  if (front == NULL) {
    front = newNode;
    rear = newNode;
  } else {
    rear->next = newNode;
    rear = newNode;
  }
}

void dequeue() {
  Node *temp = front;
  int item = temp->data;
  if (front == NULL) {
    return;
  }
  front = front->next;
  free(temp);
}

void printQueue() {
  Node *temp = front;
  while (temp != NULL) {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  enqueue(10);
  enqueue(20);
  enqueue(30);
  printQueue();
  dequeue();
  printQueue();
  dequeue();
  printQueue();
  dequeue();
  return 0;
}
