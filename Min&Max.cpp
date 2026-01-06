#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

// you need to just go left side to get minimum
Node *minValue(Node *root)
{
    if (root->left == NULL || root == NULL)
    {
        return root;
    }
    return minValue(root->left);
}
// -----------------------------------------
// for safer you should go with iterative appraoch to find with these approach ----
// -----------------------------------------

// you need to just go right side for max value
Node *maxValue(Node *root)
{
    if (root->right == NULL || root == NULL)
    {
        return root;
    }
    return maxValue(root->right);
}

int main()
{
}