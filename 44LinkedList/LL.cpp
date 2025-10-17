#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtTail(Node *&tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void deleteAtPosition(Node* &head, int pos){
    Node * temp = head;
    for(int i = 1; i < pos ; i++){
        temp = temp->next;
    }
    Node * toDelete = temp->next;
    temp->next = toDelete->next;
    delete toDelete;
}
void insertAtPostion(Node *&head, int pos , int d){
    Node *newNode = new Node(d);
    Node *temp = head;
    for(int i = 1; i < pos - 1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void Print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    Print(head);
    InsertAtTail(tail, 12);
    Print(head);
    InsertAtTail(tail, 15);
    Print(head);
    insertAtPostion(head,3,14);
    Print(head);
    deleteAtPosition(head,2);
    Print(head);
}