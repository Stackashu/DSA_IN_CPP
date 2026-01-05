#include <iostream>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

vector<int> morrisInorderTraversal(TreeNode* root) {
    vector<int> ans;
    TreeNode* curr = root;
    
    while (curr) {
        if (curr->left == NULL) {
            ans.push_back(curr->val);
            curr = curr->right;
        } else {
            TreeNode* pred = curr->left;
            while (pred->right && pred->right != curr) {
                pred = pred->right;
            }
            
            if (pred->right == NULL) {
                pred->right = curr;   // create thread
                curr = curr->left;
            } else {
                pred->right = NULL;   // remove thread
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
    }
    return ans;
}