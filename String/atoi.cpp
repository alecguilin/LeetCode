#include<iostream>
#include<climits>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long int result = 0;
        int start = 0;
        int sign = 1;

        while(s[start] == ' ') start++; //eliminates leading white space

        if(s[start] == '-') {
            sign = -1;
            start++;
        }
        else if (s[start] == '+') start++;
        
        if(!isDigit(s[start])) return 0;

        for (int i = start; i < s.size() && result <= INT_MAX; i++)
        {
            if(!isDigit(s[i])) break;
            result = result*10 + (s[i] - 48);
        }

        if(result > INT_MAX) {
            if(sign == -1) return INT_MIN;
            else return INT_MAX;
        }
        return result*sign;
    }

private:
    bool isDigit(char c) {
        if (c - '0' >= 0 && c - '0' <= 9) return true;
        else return false;
    }
};

int main () {
    Solution* obj = new Solution();
    cout << obj->myAtoi("   -982182 with s");
}

//987

// 98
// 987