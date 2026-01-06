
#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* insertIntoBST(Node* root, int data){
    if(root == NULL){
        Node* newNode = new Node(data);
        root = newNode;
        return root;
    }
    
    if(data < root->data){
        root->left = insertIntoBST(root->left , data);
    }
    else{
        root->right = insertIntoBST(root->right , data);
    }

    return root;
}

void levelOrderTraversalPrint(Node* root){
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        int n = q.size();
        for(int i = 0; i < n; i++){
            Node* current = q.front();
            q.pop();
            cout << current->data << " ";
            if(current->left != nullptr){
                q.push(current->left);
            }
            if(current->right != nullptr){
                q.push(current->right);
            }
        }
        cout << endl; // To separate levels
    }
}

void takeInput(Node* &root){
    int data;
    cin >> data ;

    while(data != -1){
        root = insertIntoBST(root,data);
        cin >> data ;
    }
}
int main(){
    Node* root = NULL;

    cout<< "Enter data to create BST" << endl;
    takeInput(root);

    levelOrderTraversalPrint(root);
}