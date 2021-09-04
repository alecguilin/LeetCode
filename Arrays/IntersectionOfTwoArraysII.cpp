#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
            cout << "switching two array parameters\n";
            return intersect(nums2, nums1);
        }

        vector<int> result;
        map<int, int> myMap;

        for (int i = 0; i < nums1.size(); i++)
        {
            myMap[nums1[i]]++;
            // myMap['G'];
            // If 'G' did not exist it now exist and is 1.
            // If 'G' had a value of 'n' it now has a value of 'n+1'
        }
        
        for (int i = 0; i < nums2.size(); i++)
        {
            if (myMap.find(nums2[i]) != myMap.end() && myMap[nums2[i]] > 0) 
            {
                result.push_back(nums2[i]);
                myMap[nums2[i]]--;
            }
        }
        
        return result;
    }
};

void print(vector<int>);

int main () {
    Solution* obj = new Solution();
    vector<int> test1 = {4,9,5,4,5,6,7,4};
    vector<int> test2 = {9,4,9,8,4};
    vector<int> result = obj->intersect(test1, test2);

    print(result);
    
}

void print(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << endl;
}
