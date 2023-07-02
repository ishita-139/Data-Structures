#include <stdlib.h>
#include <iostream>
using namespace std;
// Create a node
struct Node {
  int data;
  struct Node* next;
};
void reverse(Node *head) {
    Node *temp = NULL;
    Node *prev = NULL;
    Node *current = (head);
    while(current != NULL) 
    {
        temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    (head) = prev;
}