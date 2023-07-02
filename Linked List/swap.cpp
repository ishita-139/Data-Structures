#include <stdlib.h>
#include <iostream>
using namespace std;
// Create a node
struct Node {
  int data;
  struct Node* next;
};

void* swap(Node *head,Node *a,Node *b) {
    Node *temp = head;
    while(temp->next != a) 
    {
        temp=temp->next;
    }
    a->next=b->next;
    b->next=a;
    temp->next=b;
}