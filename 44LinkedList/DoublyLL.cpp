#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

int Print(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
        len++;
    }
    cout<<endl;
    return len;
}

void insertAtHead(Node* &head , int d){
    Node* temp = head;
    Node * newNode = new Node(d);
    newNode->next = temp;
    temp->prev = newNode;
    head = newNode;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = tail;
    Node* newNode = new Node(d);
    temp->next = newNode;
}
void insertAtPostion(Node* &head,int pos , int d){
    Node* temp = head;
    Node* newNode = new Node(d);
    for(int i = 1; i < pos-1; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev= temp;
}

void delteAtPositin(Node* &head , int pos){
    Node* temp = head;
    for(int i = 1 ; i < pos; i++){
    temp = temp->next;
    }
    // Node* preN = temp->prev;
    temp->prev->next = temp->next;
    temp->next->prev=temp->prev;
}
int main(){
 Node* node1 = new Node(10);
 Node* head = node1;
 Node* tail = node1;
 cout<<Print(head)<<endl;
 insertAtHead(head,20);
 Print(head);
 insertAtTail(tail,30);
 Print(head);
 insertAtPostion(head,3,15);
 Print(head);
 delteAtPositin(head,2);
 Print(head);
}