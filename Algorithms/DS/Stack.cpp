#include <stdio.h>

#define MAX_LEN 100

struct Stack {
  int top;
  int data[MAX_LEN];
};

void push(Stack *s, int item) {
  if (s->top < MAX_LEN) {
    s->data[s->top] = item;
    s->top++;
  } else {
    printf("Stack overflow\n");
  }
}

void pop(Stack *s) {
  if (s->top > 0) {
    s->top--;
  } else {
    printf("Stack underflow\n");
  }
}

int length(Stack s) { return s.top; }

int main() {
  Stack height;
  height.top = 0;
  push(&height, 1);
  push(&height, 2);
  push(&height, 3);

  int len = length(height);

  for (int i = 0; i < len; i++) {
    printf("%d\n", height.data[i]);
  }

  return 0;
}