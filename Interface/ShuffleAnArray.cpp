/*

// Init an array with set 1, 2, and 3.
int[] nums = {1,2,3};
Solution solution = new Solution(nums);

// Shuffle the array [1,2,3] and return its result. Any permutation of [1,2,3] must equally likely to be returned.
solution.shuffle();

// Resets the array back to its original configuration [1,2,3].
solution.reset();

// Returns the random shuffling of array [1,2,3].
solution.shuffle();

*/

#include<iostream>
#include<vector>
#include<time.h>
using namespace std;

class Solution {
public:
    vector<int> temp;
    vector<int> original;

    Solution(vector<int>& nums) {
        temp = nums;
        original = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return original;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        if (temp.size() > 0) {
            for (int i = 0; i < temp.size(); i++)
            {
                swap(temp[i], temp[rand() % temp.size()]);
            }
            //swapping only two elements, faster run time
            //swap(temp[rand() % temp.size()], temp[rand() % temp.size()]);
        }
        return temp;
    }
};

void print(vector<int>);

int main() {
    srand (time(NULL)); //initialize random seed
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    Solution* obj = new Solution(nums);
    vector<int> param_1 = obj->shuffle();
    print(param_1);
    vector<int> param_2 = obj->reset();
    print(param_2);
    vector<int> param_3 = obj->shuffle();
    print(param_3);

}

void print(vector<int> list) {
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */