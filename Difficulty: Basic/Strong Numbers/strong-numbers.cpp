//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
  int factorial(int n){
      if(n==0) return 1;
      
      int result = 1;
      
        for (int i = 1; i <= n; ++i) {
            result *= i;
        }
        return result;
  }
    int isStrong(int N) {
        // code here
        int original = N;
        int sum = 0;
        while (N != 0) {
            int digit = N % 10;
            sum += factorial(digit);
            N /= 10;
        }
        return (sum == original) ? 1 : 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isStrong(N) << endl;
    }
    return 0;
}
// } Driver Code Ends