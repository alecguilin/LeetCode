#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        int result = 0;
        
        //using bit manipulation to solve problem
        for (int i = 0; i < nums.size(); i++)
        {
            result ^= nums[i];
        }

        return result;
    }
};

int main () {
    Solution* obj;
    vector<int> test = {1,4,2,1,2};
    cout << obj->singleNumber(test) << endl;
}

/*

Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:
Input: [2,2,1]
Output: 1

Example 2:
Input: [4,1,2,1,2]
Output: 4


1,4,2,1,2

00000001
00000100
--------
00000101
00000010
--------
00000111
00000001
--------
00000110
00000010
--------
00000100

*/
