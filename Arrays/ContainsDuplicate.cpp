#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!mp[nums[i]]) {
                mp[nums[i]] = 1;
            }
            else {
                return true;
            }
        }
        
        return false;
    }
};

int main () {
    Solution* obj = new Solution();
    vector<int> result = {};

    if (obj->containsDuplicate(result) == true) {
        cout << "true\n";
    }
    else {
        cout << "false\n";
    }
}