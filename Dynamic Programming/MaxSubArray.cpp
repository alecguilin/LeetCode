#include<iostream>
#include<vector>
using namespace std;

int maxSubArray(vector<int>& nums) 
{
    int table[nums.size()]; //create 2nd array to track sums
    table[0] = nums[0];
    int largestSum = nums[i];
    
    for (int i = 1; i < nums.size(); i++)
    {
        table[i] = max(nums[i], nums[i]+table[i-1]);
        largestSum = max(largestSum, table[i]);
    }
    
    return largestSum;
}

int main() {
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};

    cout << maxSubArray(nums);
}

/*

[-2, 1, -3, 4, -1, 2, 1, -5, 4]

[-2, 1, -2, 4, 3, 5, 6, 1, 5] ==> 6 is highest sum

*/