//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	     if (n < 2) // Check if array has at least two elements
            return -1;
        
        int firstMax = INT_MIN; // Initialize firstMax to the minimum value
        int secondMax = INT_MIN; // Initialize secondMax to the minimum value
        
        for (int i = 0; i < n; i++) {
            if (arr[i] > firstMax) {
                secondMax = firstMax; // Update secondMax if a new maximum is found
                firstMax = arr[i]; // Update firstMax
            } else if (arr[i] > secondMax && arr[i] != firstMax) {
                secondMax = arr[i]; // Update secondMax
            }
        }
        
        if (secondMax == INT_MIN) // If secondMax was not updated, second largest does not exist
            return -1;
        
        return secondMax; // Return the second largest element
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends