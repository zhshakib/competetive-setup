#include <stdio.h>

#define MAX_SIZE 100

struct Stack {
  int top = -1;
  int data[MAX_SIZE];
};

int isEmpty(Stack *s) { return s->top == -1; }
int isFull(Stack *s) { return s->top == MAX_SIZE - 1; }

void push(Stack *s, int item) {
  if (isFull(s)) {
    printf("Stack overflow\n");
    return;
  }
  // increment top
  s->top++;
  // insert item
  s->data[s->top] = item;
}

void pop(Stack *s) {
  if (isEmpty(s)) {
    printf("Stack underflow\n");
    return;
  }
  // decrement top
  s->top--;
}

void printStack(Stack s) {
  for (int i = 0; i <= s.top; i++) {
    printf("%d ", s.data[i]);
  }
  printf("\n");
}

int main() {
  Stack mystack;
  push(&mystack, 1);
  push(&mystack, 2);
  push(&mystack, 3);
  printStack(mystack);
  pop(&mystack);
  printStack(mystack);
  return 0;
}
