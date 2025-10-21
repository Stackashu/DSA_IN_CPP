#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
        this->next = NULL;
    }

    ~Node(){
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
    }
};

void insertAtTail(Node* &head , int d){
    Node* newNode = new Node(d);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
void Print(Node* head){
    Node * temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void ReverseLL(Node* &head){
    if(head == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forw = NULL;
   
    while (curr != NULL)
    {
        forw = curr->next;
       curr->next = prev;
       prev=curr;
       curr=forw;
    }
    head = prev;
    return;
}

int main(){
    Node* head = NULL;
    insertAtTail(head,10);
    insertAtTail(head,20);
    insertAtTail(head,30);
    Print(head);
    // Memory cleanup (optional)
    // delete head;
    ReverseLL(head);
    Print(head);
}