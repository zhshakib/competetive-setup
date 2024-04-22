#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
};

Node *top = NULL;

void push(int item) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = item;
  newNode->next = top;
  top = newNode;
}

int pop() {
  Node *temp = top;
  int item = temp->data;
  top = top->next;
  return item;
}

int main() {
  push(1);
  push(2);
  push(3);
  printf("%d\n", pop());
  printf("%d\n", pop());
  printf("%d\n", pop());

  return 0;
}