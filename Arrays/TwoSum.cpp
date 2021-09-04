#include<vector>
#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int, int> myMap;
        
        for (int i = 0; i < nums.size(); i++)
        {
            int difference = target - nums[i];
            //check if difference is a key in map
            if (myMap.count(difference) != 0) {
                //difference is found
                result.push_back(myMap[difference]);
                result.push_back(i);
                return result;
            }
            //adds nums[i] to map and assigns i as the value to the key nums[i]
            myMap[nums[i]] = i;
        }
        return result;
    }
};

int main () {
    Solution* obj;
    vector<int> test1 = {3,3};
    vector<int> result = obj->twoSum(test1,6);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    
}

/*

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

 

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 105
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

*/
