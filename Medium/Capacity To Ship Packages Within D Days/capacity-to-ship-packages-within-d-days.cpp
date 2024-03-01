//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
#include<bits/stdc++.h>

class Solution {
  public:
    int leastWeightCapacity(int arr[], int N, int D) {
        // code here
         // code here
        int maxEle=arr[0];
        int sum = 0;
        for(int i=0;i<N;i++)
        {
            sum = sum + arr[i];
            maxEle = max(maxEle,arr[i]);
        }
        int low = maxEle;
        int high = sum;
        int ans = 0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            int tillSum=0;
            int count = 1;
            for(int i=0;i<N;i++)
            {
                if(tillSum+arr[i]>mid)
                {
                    tillSum = arr[i];
                    count++;
                }
                else
                {
                    tillSum = tillSum + arr[i];
                }
            }
            // cout<<low<<" "<<high<<" "<<count<<endl;
            if(count<=D)
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        } 
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends