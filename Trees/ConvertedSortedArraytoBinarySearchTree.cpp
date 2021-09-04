/* Convert Sorted Array to Binary Search Tree */
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

TreeNode* convert(vector<int>& nums,int l,int r)
{
	cout << "L is " << l << " R is " << r << endl;
    if(l>r)
    return NULL;
    int mid=l+(r-l)/2; // (l+r)/3 can cause overflow if l or r is INT_MAX
    					// this prevents overflow from happening

	cout <<"adding to head " << nums[mid] << endl;
    TreeNode *head=new TreeNode(nums[mid]);
    head->left=convert(nums,l,mid-1);
    head->right=convert(nums,mid+1,r);
    return head;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n=nums.size();
        if(n==0)
        return NULL;
        return convert(nums,0,n-1);
}

int main() {
    vector<int> nums;
	nums.push_back(-10);
	nums.push_back(-3);
	nums.push_back(0);
	nums.push_back(5);
	nums.push_back(9);

	vector<int> list;
	list.push_back(0);
	list.push_back(1);

	TreeNode* rootTest = sortedArrayToBST(nums);

	cout << "root is " << rootTest->val << endl;
	cout << "left child is " << rootTest->left->val << endl;
	cout << "right child is " << rootTest->right->val << endl;
	cout << rootTest->right->val << endl;

	
}