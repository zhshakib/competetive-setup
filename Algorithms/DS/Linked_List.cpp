// Linked list in c!
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
  int key, data;
  struct node *next;
};

// First Situation when head is null and current element is also null!
struct node *head = NULL;
struct node *current = NULL;

void insertFirst(int key, int data) {
  struct node *link = (struct node *)malloc(sizeof(struct node));
  link->key = key;
  link->data = data;

  link->next = head;
  head = link;
}

int length() {
  int len = 0;

  struct node *current = head;
  while (current != NULL) {
    len++;
    current = current->next;
  }

  return len;
}

struct node *find(int key) {
  struct node *current = head;
  if (head == NULL) {
    return NULL;
  }

  while (current->key != key) {
    // Check if its the last node!
    if (current->next == NULL) {
      return NULL;
    } else {
      current = current->next;
    }
  }
  return current;
}

struct node *deleteOne(int key) {
  struct node *current = head;
  struct node *previous = NULL;

  if (head == NULL) return NULL;

  while (current->key != key) {
    if (current->next == NULL)
      return NULL;
    else {
      previous = current;
      current = current->next;
    }
  }
  // if found the item:
  if (current == head)
    return NULL;
  else
    previous->next = current->next;

  return current;
}

struct node *deleteFirst() {
  // saving refference of first node;
  struct node *tempLink = head;
  head = head->next;
  return tempLink;
}

void printList() {
  struct node *ptr = head;
  // printing list [1,2,3,3,4] like this!
  printf("\n[");
  while (ptr != NULL) {
    printf("%d->%d,", ptr->key, ptr->data);
    ptr = ptr->next;
  }

  printf("]");
}

int main() {
  insertFirst(1, 20);
  insertFirst(2, 30);
  insertFirst(3, 15);
  insertFirst(4, 40);
  insertFirst(5, 12);
  insertFirst(6, 16);

  printList();
  printf("\n%d", deleteFirst()->data);
  printList();

  printf("\nlength of list: %d", length());
  printf("\n%d", find(6)->data);
}