#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp.insert({'I',1});
        mp.insert({'V',5});
        mp.insert({'X',10});
        mp.insert({'L',50});
        mp.insert({'C',100});
        mp.insert({'D',500});
        mp.insert({'M',1000});

        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (i != s.size()-1 && mp[s[i+1]] > mp[s[i]]) {
                ans += (mp[s[i+1]]-mp[s[i]]);
                i++;
            }
            else
            {
                ans += mp[s[i]];
            }
            
        }

        return ans;
        
    }
};

int main () {
    Solution* obj = new Solution;
    string test = "MCMXCIV";
    cout << obj->romanToInt(test) << endl;
}