#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                myStack.push(s[i]);
            }
            else if (s[i] == ')' && !myStack.empty() && myStack.top() == '(') {
                myStack.pop();
            }
            else if (s[i] == ']' && !myStack.empty() && myStack.top() == '[') {
                myStack.pop();
            }
            else if (s[i] == '}' && !myStack.empty() && myStack.top() == '{') {
                myStack.pop();
            }
            else {
                return false;
            }
        }

        return myStack.empty();

    } 
};

int main () {
    Solution* obj = new Solution;

    string test;
    while(test!="0") {
        cout << "please enter string: ";
        cin >> test;

        if (obj->isValid(test)) {
            cout << "VALID\n";
        }
        else {
            cout << "INVALID\n";
        }
    }
}