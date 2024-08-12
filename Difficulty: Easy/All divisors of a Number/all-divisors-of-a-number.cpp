//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void print_divisors(int n) {
     vector<int> divisors;
        
        // Loop to find divisors
        for(int i = 1; i * i <= n; i++) {
            if(n % i == 0) {
                cout << i << " ";
                if(i != n / i) {
                    divisors.push_back(n / i);
                }
            }
        }
        
        // Print divisors greater than sqrt(n)
        for(int i = divisors.size() - 1; i >= 0; i--) {
            cout << divisors[i] << " ";
        }   // Code here.
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        Solution ob;
        ob.print_divisors(n);
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends