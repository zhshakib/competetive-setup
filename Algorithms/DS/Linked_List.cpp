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

// Inserts a element first and make it Head!
void insertFirst(int key, int data) {
  struct node *link = (struct node *)malloc(sizeof(struct node));
  link->key = key;
  link->data = data;

  link->next = head;
  head = link;
}

// Returns the length of list!
int length() {
  int len = 0;

  struct node *current = head;
  while (current != NULL) {
    len++;
    current = current->next;
  }

  return len;
}

// Search and Finds a Node with Given key!
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

// Delete a Node of Given key!
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

// Delete the first Node!
struct node *deleteFirst() {
  // saving refference of first node;
  struct node *tempLink = head;
  head = head->next;
  return tempLink;
}

// Function for printing the List.
void printList() {
  struct node *ptr = head;
  // printing list [1,2,3,3,4] like this!
  printf("\n[");
  while (ptr != NULL) {
    printf("%d->%d,", ptr->key, ptr->data);
    ptr = ptr->next;
  }

  printf("]\n");
}

// Sorting the Linked List!
void sort() {
  struct node *current, *next;
  int size = length() - 1;
  int k = size + 1;

  for (int i = 0; i < size; i++, k--) {
    current = head;
    next = current->next;

    for (int j = 1; j < k; ++j) {
      if (current->data > next->data) {
        int tempData = current->data;
        current->data = next->data;
        next->data = tempData;
        // Swap keys also!
        int tempKey = current->key;
        current->key = next->key;
        next->key = tempKey;
      }
      current = current->next;
      next = next->next;
    }
  }
}

void insertLast(int key, int data) {
  node *newNode = (node *)malloc(sizeof(node));
  newNode->key = key;
  newNode->data = data;

  node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }

  if (current->next == NULL) {
    current->next = newNode;
    newNode->next = NULL;
  }
}

int main() {
  insertFirst(1, 20);
  insertFirst(2, 30);
  insertFirst(3, 15);
  insertFirst(4, 40);
  insertFirst(5, 12);
  insertFirst(6, 16);
  printList();
  printf("\nAfter Sort: ");
  sort();
  printList();
  printf("\nInsert at the END: ");
  insertLast(8, 25);
  printList();
}