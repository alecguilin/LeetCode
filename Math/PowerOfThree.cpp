/*

Given an integer, write a function to determine if it is a power of three.

Example 1:
Input: 27
Output: true

Example 2:
Input: 0
Output: false

Example 3:
Input: 9
Output: true

Example 4:
Input: 45
Output: false

Follow up:
Could you do it without using any loop / recursion?

*/
#include<math.h>
#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n < 1) { return false; }

        while (n % 3 == 0) { n /= 3; }
        
        return n == 1;
    }
};

int main() {
    Solution* obj;
    //test 27t,0f,9t,45f
    bool test = obj->isPowerOfThree(27);

    if (test)
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }
}