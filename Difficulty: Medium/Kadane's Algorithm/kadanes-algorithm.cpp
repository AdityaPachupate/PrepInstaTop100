//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
         // Initialize variables to store the maximum sum and current sum
        int maxSum = arr[0];  // to store the overall maximum sum
        int curSum = arr[0];  // to store the current subarray sum
        
        for (int i = 1; i < arr.size(); i++) {
            // Update curSum: either take the current element alone or add it to the current subarray sum
            curSum = max(arr[i], curSum + arr[i]);
            
            // Update maxSum if curSum is greater
            maxSum = max(maxSum, curSum);
        }
        
        return maxSum;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // To discard any leftover newline characters
    while (t--)   // while testcases exist
    {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.maxSubarraySum(arr) << endl;
    }
}
// } Driver Code Ends