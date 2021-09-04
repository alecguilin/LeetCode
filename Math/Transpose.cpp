#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        int m = A.size();
        int n = A[0].size();
        
		//Initialize the Transpose Matrix
		//If You Fail To Initalize the Vector, You might run into Errors.
        vector<vector<int>> result(n, vector<int>(m, 0));
        
        for(int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result[j][i] = A[i][j];
            }
        }
        
        return result;
    }
};

int main () {
    Solution* obj;
    vector<vector<int>> myVec = { {1,2,3}, {4,5,6} };
    vector<vector<int>> result = obj->transpose(myVec);
    cout << result[0][1] << endl;
}