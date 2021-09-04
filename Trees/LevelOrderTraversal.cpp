/* Binary tree - Level Order Traversal */
#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct TreeNode {
	int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

vector< vector<int> > levelOrder(TreeNode* root) {
	vector< vector<int> > result;
    if (root == NULL) return result;

	queue<TreeNode*> Q;
	Q.push(root);
	while (!Q.empty())
	{
		int size = Q.size();
		vector<int> currentLevel;
		for (int i = 0; i < size; i++)
		{
			TreeNode* current = Q.front();
			Q.pop();
			currentLevel.push_back(current->val);
			if (current->left!=NULL) Q.push(current->left);
			if (current->right!=NULL) Q.push(current->right);
		}
		result.push_back(currentLevel);
	}
	
	return result;
}

void PrintVector(vector< vector<int> > list)
{
	for (int i = 0; i < list.size(); i++)
	{
		for (int j = 0; j < list[i].size(); j++)
		{
			cout << list[i][j] << " ";
		}
		cout << endl;
	}	
}

int main() {

	TreeNode* root = new TreeNode(1);
	root->right = new TreeNode(2);
	root->left = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->right->right = new TreeNode(5);

	PrintVector(levelOrder(root));
	
}