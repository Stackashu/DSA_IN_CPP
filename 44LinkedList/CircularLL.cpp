#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL && this->next != this)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int d)
{
    Node *newNode = new Node(d);

    // If the list is empty (tail is NULL), initialize it as a circular list.
    if (tail == NULL)
    {
        tail = newNode;
        newNode->next = newNode;
        return;
    }

    // Insert after the tail (at the end) for a circular linked list.
    newNode->next = tail->next;
    tail->next = newNode;
    tail = newNode;
}

void deleteNode(Node *&tail, int ele)
{
    if (tail == NULL)
    {
        cout << " List is empty";
        return;
    }

   
    else
    {
        Node *temp = tail;
        Node* curr = temp->next;
        
        while (curr->data != ele)
        {
            temp = curr;
            curr = curr->next;
        }
        temp->next = curr->next;
        if(curr == temp){
            temp->next = NULL;
            delete temp;
            tail= NULL;
            return;
        }
        if(tail == curr){
            tail = temp;
        }
        curr->next = NULL;
        delete curr;
        return;
    }
}

void Print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = tail->next; // Start from the first node.
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << endl;
}

int main()
{
    Node *tail = NULL;

    insertNode(tail, 10);
    // insertNode(tail, 20);
    // insertNode(tail, 30);

    Print(tail);
    deleteNode(tail, 10);
    Print(tail);
    // Free the memory explicitly since we created nodes with new.
    // if (tail != NULL) {
    //     Node* start = tail->next;
    //     tail->next = NULL; // Break the circular link to avoid infinite recursion.
    //     delete start;
    //     tail = NULL;
    // }

    return 0;
}