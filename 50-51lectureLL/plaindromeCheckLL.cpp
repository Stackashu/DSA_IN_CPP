#include <iostream>
#include <vector>
using namespace std;

class Node
{

public:
    string data;
    Node *next;

    Node(string data)
    {
        this->data = data;
        next = NULL;
    }
};

Node* revereLL(Node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }

    Node* newHead = revereLL(head->next);

    head->next->next = head;
    head->next = NULL;
    return newHead;
}

bool isPalindrome(Node* head1,Node* head2){
    while ( head2 != NULL)
    {
        if(head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
     return true;
}

int main()
{
    Node *node1 = new Node("a");
    node1->next = new Node("b");
    node1->next->next = new Node("a");
    // vector<string> arr;

    // Node *temp = node1;
    // while (temp != NULL)
    // {
    //     arr.push_back(temp->data);
    //     temp = temp->next;
    // }

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     if (arr[i] != arr[arr.size() - i - 1])
    //     {
    //         cout << " Not a plaindrom";
    //         break;
    //     }
    // }
    // cout << " yes it is a palindrome";


    Node * first = node1;
    Node * second = node1;

    while (second != NULL)
    {
      second = second->next;
      if(second != NULL){
        second = second->next;
        first = first->next;
      }
    }
    
    second = first->next;

    first->next =   revereLL(second);

    if(isPalindrome(node1,first->next)){
        cout<<"yes it is palindrome"<<endl;
    }else{
        cout<<"it is not palindrome"<<endl;
    }
    
    first->next = revereLL(second);


}