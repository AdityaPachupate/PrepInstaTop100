//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  // Function for calculation Toyal hours required if speed if  consumtion is (ith element) per hour 
  int func(vector<int> &v,int hourly){
    int totalHr =0;
    for(int i=0;i<v.size();i++){
        totalHr+= ceil((double)v[i]/(double)hourly);
    }
    return totalHr;
  }
  
    int Solve(int N, vector<int>& piles, int H) {
        // Code here
        int low = 1 , high = *max_element(piles.begin(), piles.end()); ;
        
        while(low<high){
            int mid = (low+high)/2;
            int totalHrs = func(piles,mid);
            if(totalHrs<=H){
                high=mid;
            }else{
                low=mid+1;
            }
         }
         return low;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int h;
        cin >> h;
        Solution obj;

        cout << obj.Solve(n, a, h);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends