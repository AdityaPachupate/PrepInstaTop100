//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n = arr.size();
        vector<int> leftSmaller(n, 0);  // Nearest left smaller
        vector<int> rightSmaller(n, 0); // Nearest right smaller

        stack<int> s;

        // Find nearest smaller to left for every element
        for (int i = 0; i < n; i++) {
            while (!s.empty() && s.top() >= arr[i]) {
                s.pop();
            }
            if (!s.empty()) {
                leftSmaller[i] = s.top();
            }
            s.push(arr[i]);
        }

        // Clear the stack to use for right smaller elements
        while (!s.empty()) s.pop();

        // Find nearest smaller to right for every element
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && s.top() >= arr[i]) {
                s.pop();
            }
            if (!s.empty()) {
                rightSmaller[i] = s.top();
            }
            s.push(arr[i]);
        }

        // Calculate the maximum absolute difference
        int maxDiff = 0;
        for (int i = 0; i < n; i++) {
            maxDiff = max(maxDiff, abs(leftSmaller[i] - rightSmaller[i]));
        }

        return maxDiff;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends