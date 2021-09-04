#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> myMap;
        for (int i = 0; i < s.length(); i++)
        {
            myMap[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (myMap[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};

int main () {
    Solution* obj = new Solution;
    int test = obj->firstUniqChar("");
    cout << test << endl;

    delete obj;
}