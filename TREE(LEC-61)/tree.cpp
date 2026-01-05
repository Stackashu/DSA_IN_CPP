#include <iostream>
#include <queue>
using namespace std;

class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* buildTree(Node* root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }

    root = new Node(data);

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);

    return root;
}

void printTree(Node* root){
    if(root == NULL) return;
    queue <Node*> q;
    q.push(root);

    while(!q.empty())
    {
        int size = q.size();
        for(int i = 0; i < size; ++i){
            Node* temp = q.front();
            q.pop();
            if(temp){

                cout << temp->data << " ";

                if(temp->left){
                    q.push(temp->left);
                }

                if(temp->right){
                    q.push(temp->right);
                }

            }
        }
        cout << endl;
    }
}


void inorder(Node* root){
    // base case 
    if(root == NULL){
        return;
    }

    inorder(root->left);
    cout<< root->data << " ";
    inorder(root->right);
}
void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<< root->data << " ";
    preorder(root->left);
    preorder(root-> right);
}
void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root-> right);
    cout<< root->data << " ";
}

Node* buildFromLevelOrder(Node* &root){
    queue<Node*> q;
    cout << "Enter data for root" << endl;
    int data;
    cin >> data;
    if (data == -1) {
        root = NULL;
        return root;
    }
    root = new Node(data);
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;

        if (leftData != -1) {
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for: " << temp->data << endl;
        int rightData;
        cin >> rightData;

        if (rightData != -1) {
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
    }
    
}

int main(){
    Node* root = NULL;
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    buildFromLevelOrder(root);
    printTree(root);
    // right belwo number as input at once
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // root = buildTree(root);
    // printTree(root);
    // cout<< " Inorder traversal"<<endl;
    // inorder(root);
    // cout<<endl;
    // cout<< " Precorder tranversal " << endl;
    // preorder(root);
    // cout<<endl;
    // cout<<" postorder tranversal" << endl;
    // postorder(root);
    // cout<<endl ;
    return 0;
}