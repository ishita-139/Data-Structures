#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
// Create a node
struct Node {
  int data;
  struct Node* next;
};

bool Palindrome(Node* head)
{
    Node* slow = head;
    stack<int> s;
 
    while (slow != NULL) {
        s.push(slow->data);
        slow = slow->next;
    }
    while (head != NULL) {
        int i = s.top();
        s.pop();
        if (head->data != i) {
            return false;
        }
        head = head->next;
    }
    return true;
}