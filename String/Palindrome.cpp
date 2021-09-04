#include<iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {


        if (x < 0) return false;

        int temp = x;
        long int reverse = 0; //long bc of leetcode testcases

        while (temp!=0)
        {
            reverse = (reverse*10) + (temp%10);
            temp /= 10;
        }
        
        if(reverse == x) return true;

        return false;
    }
};

int main () {
    Solution* obj = new Solution;

    int test = 1766710;

    if (obj->isPalindrome(test)) {
        cout << "TRUE\n";
    }
    else
    {
        cout << "FALSE\n";
    }
    
}