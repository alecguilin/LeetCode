#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;
        while (start < end) {
            char temp = s[start];
            s[start++] = s[end];
            s[end--] = temp;
        }
    }
};

int main () {
    Solution* obj;
    vector<char> test = {'h', 'e', 'l', 'l', 'o'};
    obj->reverseString(test);

    for (int i = 0; i < test.size(); i++)
    {
        cout << test[i];
    }
    
}