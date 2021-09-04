#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        
        map<char, int> mp;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            mp[t[i]]--;
        }
        
        for (auto i = mp.begin(); i != mp.end(); i++)
        {
            if (i->second != 0) return false;
        }
        
        return true;

    }
};

int main () {
    Solution* obj = new Solution();
    string t1 = "rat";
    string t2 = "car";
    if (obj->isAnagram(t1,t2)) {
        cout << "TRUE\n";
    }
    else {
        cout << "FALSE\n";
    }
}