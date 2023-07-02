#include <stdlib.h>
#include <iostream>
using namespace std;
// Create a node
struct Node {
  int data;
  struct Node* next;
};
int countNodes(Node * head) 
{
  Node* temp = head;
  int count = 0;
  while(temp != NULL) {
    count++;
    temp = temp->next;
  }
  return count;  
} 