#include <iostream>
#include <map>
using namespace std;

class Node
{
public:
  int data;
  Node *next;
  Node(int val) : data(val), next(NULL) {}
};

bool detectLoop(Node *head)
{
  if (head == NULL)
    return false;
  map<Node *, bool> visited;
  Node *temp = head;

  while (temp != NULL)
  {
    if (visited[temp] == true)
    {
      return true;
    }
    visited[temp] = true;
    temp = temp->next;
  }
  return false;
}
// Floyd's Cycle Detection algorithm to detect the starting node of the loop
// Time Complexity: O(n)
// Space Complexity: O(1)
bool flloydDetectLoop(Node *head)
{
  if (head == NULL)
    return false;

  Node *slow = head;
  Node *fast = head;

  // Step 1: Detect loop using Floyd's algorithm (Tortoise and Hare)
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      // Step 2: Find the starting node of the loop
      Node *entry = head;
      while (entry != slow)
      {
        entry = entry->next;
        slow = slow->next;
      }
      cout << "Loop starts at node with data: " << entry->data << endl;
      Node *temp = entry;
      while (temp->next != entry)
      {
        temp = temp->next;
      }
      cout << temp->data;
      temp->next = NULL;

      return true;
    }
  }

  return false;
}

void Print(Node* head){
  while (head!=NULL)
  {
    cout<<head->data;
    head = head->next;
  }
  
}
int main()
{
  // Dummy nodes creation
  Node *head = new Node(1);
  Node *second = new Node(2);
  Node *third = new Node(3);
  Node *fourth = new Node(4);

  // Single linked list creation
  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = second; // Loop created (4->2)
  Print(head);
  if (flloydDetectLoop(head))
  {
    cout << "Loop detected!" << endl;
  }
  else
  {
    cout << "No loop detected." << endl;
  }
  // Note: Memory leak for demo purposes.
  Print(head);
  return 0;
}