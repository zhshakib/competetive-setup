#include <stdio.h>

#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;

void push(int item) {
  // check if the stack is full
  if (top == MAX_SIZE - 1) {
    printf("Stack overflow\n");
    return;
  } else {
    stack[++top] = item;
  }
}

void pop() {
  // Check if the stack is empty
  if (top < 0) {
    printf("Stack underflow\n");
    return;
  } else {
    top--;
  }
}

void printStack() {
  // Check if the stack is empty
  if (top < 0) {
    printf("Stack is empty\n");
  } else {
    printf("Stack: ");
    for (int i = 0; i <= top; i++) {
      printf("%d ", stack[i]);
    }
    printf("\n");
  }
}

int main() {
  push(1);
  push(2);
  push(3);

  printStack();

  pop();

  printStack();

  pop();

  printStack();
}