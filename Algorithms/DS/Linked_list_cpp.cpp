#include <iostream>
using namespace std;

class Node {
 public:
  int data;
  Node *next;
};

class LinkedList {
 public:
  Node *head, *tail;
  LinkedList() {
    head = NULL;
    tail = NULL;
  }

  void insertFirst(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
    if (tail == NULL) {
      tail = newNode;
      tail->next = NULL;
    }
    cout << "Insertion Successfull" << endl;
  }

  void printList() {
    Node *iterator = new Node;
    iterator = head;
    while (iterator != NULL) {
      cout << iterator->data << " ";
      iterator = iterator->next;
    }

    cout << "" << endl;
  }
};

int main() {
  LinkedList list;
  list.insertFirst(15);
  list.insertFirst(16);
  list.insertFirst(18);
  list.insertFirst(19);
  list.insertFirst(20);

  // Printing The list!

  list.printList();

  return 0;
}
