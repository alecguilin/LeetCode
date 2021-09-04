#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        char temp;
        string ans = "";

        if (strs[0] == "") return ans;

        for (int i = 0; i < strs[0].size(); i++)
        {
            char temp = strs[0][i];
            for (int j = 1; j < strs.size(); j++)
            {   
                if(strs[j][i] != temp) return ans;
            }

            ans.push_back(temp);
        }
        return ans;
        
    }
};

int main () {
    Solution* obj = new Solution;
    vector<string> test = {"flower","flower","flower","flower"};
    vector<string> test2 = {""};
    cout << obj->longestCommonPrefix(test) << endl;
}