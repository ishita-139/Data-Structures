#include <stdlib.h>
#include <iostream>
using namespace std;
// Create a node
struct Node {
  int data;
  struct Node* next;
};

int Middle(class Node *head)
{
    struct Node *slow_ptr = head;
    struct Node *fast_ptr = head;
    if (head!=NULL)
    {
        while (fast_ptr != NULL && fast_ptr->next != NULL)
        {
                fast_ptr = fast_ptr->next->next;
                slow_ptr = slow_ptr->next;
        }
        return slow_ptr->data ;
    }
}