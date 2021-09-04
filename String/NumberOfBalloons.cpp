#include <iostream>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int char_counts[26] = {0};
        for (int i = 0; i < text.size(); i++) {
            char_counts[text[i]-'a']++; 
        }
        
        int smallest = char_counts[1]; // b
        smallest = min(smallest, char_counts[0]); // a
        smallest = min(smallest, char_counts[11] / 2); // l
        smallest = min(smallest, char_counts[14] / 2); // o
        smallest = min(smallest, char_counts[13]); // n
        return smallest;
    }
};

int main () {
    Solution* obj;
    cout << obj->maxNumberOfBalloons("baloonbaloonl") << endl;
}