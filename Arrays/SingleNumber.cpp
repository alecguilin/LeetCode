#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> myMap;
        for (int i = 0; i < nums.size(); i++)
        {
            myMap[nums[i]]++;
        }
        
        for (int i = 0; i < nums.size(); i++)
        {
            if (myMap[nums[i]] == 1) return nums[i];
        }
        
    }
};

int main () {
    Solution* obj = new Solution();
    vector<int> arr = {4,1,2,1,2};
    cout << obj->singleNumber(arr);
}