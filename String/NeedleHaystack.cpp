#include<iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int hLength = haystack.length();
        int nLength = needle.length();
        if (nLength == 0) { return 0; } //problem says to return 0 if needle string is null
        if (hLength < nLength) { return -1; } //cant find needle if needle is bigger than haystack
        for (int i = 0; i <= hLength-nLength; i++)
        {
            int j;
            for (j = 0; j < nLength; j++)
            {
                if(haystack[i+j] != needle[j]) {
                    break;
                }
            }
            if (j == nLength) { return i; }
        }
        return -1;
        
    }
};

int main () {
    Solution* obj = new Solution;
    cout << obj->strStr("aaaaa", "bba");
    delete obj;
}