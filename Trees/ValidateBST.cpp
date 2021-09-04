#include<iostream>
#include<stack>
#include<float.h>
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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> myStack;
        double leftChildVal = - DBL_MAX; //leetcode uses large numbers to test

        while (myStack.size() != 0 || root != nullptr)
        {
            while (root != nullptr)
            {
                myStack.push(root);
                root = root->left;
            }

            root = myStack.top();
            myStack.pop();

            if (root->val <= leftChildVal)
            {
                return false;
            }

            leftChildVal = root->val;
            root = root->right;
            
        }

        return true;
        
    }
};

int main () {
    TreeNode* leftChild = new TreeNode(1);
    TreeNode* rightChild = new TreeNode(4);
    TreeNode* root = new TreeNode(5, leftChild, rightChild);
    rightChild->left = new TreeNode(3);
    rightChild->right = new TreeNode(6);

    Solution* obj;
    if (obj->isValidBST(root))
    {
        cout << "valid bst\n";
    }
    else
    {
        cout << "invalid bst\n";
    }
       
}

/*

Example 1:

    2
   / \
  1   3

Input: [2,1,3]
Output: true


Example 2:

    5
   / \
  1   4
     / \
    3   6

Input: [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.

*/