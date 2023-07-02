#include <stdlib.h>
#include <iostream>
using namespace std;
// Create a node
struct Node {
  int data;
  struct Node* next;
};

Node* merge(Node *ahead,Node *bhead) {
    Node *temp = ahead;
    while(temp != NULL) 
    {
        temp = temp->next;
    }
    temp->next=bhead;
    return ahead;
}