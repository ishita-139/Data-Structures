#include <stdlib.h>
#include <iostream>
using namespace std;
// Create a node
struct Node {
  int data;
  struct Node* next;
};

void sortLinkedList(struct Node** head_ref) {
  struct Node *current = *head_ref, *index = NULL;
  if (head_ref == NULL) {return;} 
  else {
  while (current != NULL) {
    index = current->next;
    while (index != NULL) {
    if (current->data > index->data) {
      int temp = current->data;
      current->data = index->data;
      index->data = temp;
    }
    index = index->next;
    }
    current = current->next;
  }
  }
}