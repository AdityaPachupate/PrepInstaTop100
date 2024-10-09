//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {

    // Function to find the trapped water between the blocks.
  public:
    long long trappingWater(vector<int> &arr) {
        // code here
        long long int n = arr.size();
        if (n <= 2) return 0; // No water can be trapped if there are less than 3 blocks.

        long long int res = 0; 
        vector<long long int> leftMax(n), rightMax(n);

        // Fill leftMax array
        leftMax[0] = arr[0];
        for(int i = 1; i < n; i++) {
            leftMax[i] = max((long long)arr[i], leftMax[i - 1]);
        }

        // Fill rightMax array
        rightMax[n - 1] = arr[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            rightMax[i] = max((long long)arr[i], rightMax[i + 1]);
        }

        // Calculate the accumulated water element by element
        for(int i = 1; i < n - 1; i++) {
            res += min(leftMax[i], rightMax[i]) - arr[i];
        }

        return res;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    // testcases
    cin >> t;

    while (t--) {
        int n;

        // size of array
        cin >> n;

        vector<int> a(n);

        // adding elements to the array
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a) << endl;
    }

    return 0;
}
// } Driver Code Ends