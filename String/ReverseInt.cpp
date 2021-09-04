#include <iostream>
#include <climits>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long int ans = 0;

        while(x!=0) {
            ans = ans*10 + (x%10);
            x /= 10;
        }

        if(ans > INT_MAX || ans < INT_MIN) { return 0;}
        return ans;
    }
};

int main() {
    int x = 10;

    Solution* obj = new Solution;
    cout << x << " to " << obj->reverse(x);
}