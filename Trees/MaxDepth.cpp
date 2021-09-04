
#include<iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // if root is null it means tree does not exist, return 0
        if (root == nullptr) return 0;

        // traverse through left side of tree, then right side of tree
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        //compare both sides and return the larger value
        if (leftDepth > rightDepth) {
            return leftDepth+1;
        }
        else {
            return rightDepth+1;
        }
    }
};

int main () {
    
}