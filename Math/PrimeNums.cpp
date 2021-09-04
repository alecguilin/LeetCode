/*

Count the number of prime numbers less than a non-negative number, n.

Example:

Input: 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

*/

#include<iostream>
#include<vector>
#include<array>
using namespace std;

bool isPrime(int);

int countPrimes(int n) {
    vector<bool> primes(n, true);
    
    for (int i = 2; i*i < primes.size(); i++)
    {
        if (primes[i]) {
            for (int j = i; j * i < primes.size(); j++)
            {
                primes[i*j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 2; i < primes.size(); i++)
    {
        if (primes[i]) { count++; }
    }
    
    return count;
}
/* 
bool isPrime(int n) {
    for (int i = 2; i < n; i++)
    {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
    
}
 */

int main() {
    cout << countPrimes(20);
}
