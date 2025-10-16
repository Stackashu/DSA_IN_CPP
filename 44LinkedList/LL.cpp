#include<iostream>
using namespace std;


class Node {
    
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void InsertAtTail(Node* &tail , int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void Print(Node* &head){
    Node* temp = head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<< endl;
}

int main(){
    Node* node1 = new Node(10);

    Node* head = node1;
    Print(head);
    InsertAtHead(head, 12);
    Print(head);
    InsertAtHead(head, 15);
    Print(head);
}