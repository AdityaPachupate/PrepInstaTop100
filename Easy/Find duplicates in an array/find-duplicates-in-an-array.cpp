//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
        vector<int> ans;
        int hash[n] = {0};
        int count=0;
        
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(hash[i]>1){
                ans.push_back(i);
                count++;
            }
        }
        
        if(count == 0){
          ans.push_back(-1) ;
        }
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends