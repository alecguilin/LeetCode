#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;
//abbaca
class Solution {
public:
    string removeDuplicates(string S) {
        stack<char> myStack;
        string result;
        myStack.push(S[0]);
        for(int i = 1; i < S.length(); i++) {
            if (myStack.empty())
            {
                myStack.push(S[i]);
            }
            
            else if (myStack.top() != S[i]) {
                myStack.push(S[i]);
            }
            else {
                myStack.pop();
            }
        }
        
        while (!myStack.empty()) {
            result.push_back(myStack.top());
            myStack.pop();
        }
        
        //reverse string
        reverseStr(result);
        return result;
    }

    void reverseStr(string& str) 
    { 
        int n = str.length(); 
  
        // Swap character starting from two 
        // corners 
        for (int i = 0; i < n / 2; i++) 
            swap(str[i], str[n - i - 1]); 
    } 
};

int main() {
    Solution* obj;
    string result = obj->removeDuplicates("abbaca");
    cout << result << endl;
}