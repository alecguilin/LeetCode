#include<iostream>
#include<stack>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string S, string T) {
        stack<char> stackS, stackT;
        
        for (int i = 0; i < S.length(); i++)
        {
            if (S[i] != '#') {
                stackS.push(S[i]);
            }
            else
            {
                if(!stackS.empty()) {
                    stackS.pop();
                }
            }
        }

        for (int i = 0; i < T.length(); i++)
        {
            if (T[i] != '#') {
                stackT.push(T[i]);
            }
            else
            {
                if(!stackT.empty()) {
                    stackT.pop();
                }
            }
        }        

        if (stackT.size() != stackS.size()) return false;
        while (!stackT.empty())
        {
            if (stackT.top() != stackS.top()) {
                return false;
            }
            stackS.pop();
            stackT.pop();
        }
        
        return true;
    }
};
//time: O(N+M)
//space: O(N+M)

int main () {
    Solution* obj;
    cout << obj->backspaceCompare("ab##","c#d#");
}
