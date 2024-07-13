//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){
        
        // Create a vector of pairs to store elements with their original indices
        vector<pair<int, int>> arrWithIndices;
        for (int i = 0; i < N; i++) {
            arrWithIndices.push_back({arr[i], i});
        }

        // Sort the array based on the values
        sort(arrWithIndices.begin(), arrWithIndices.end());

        // Map to store the rank of each element
        unordered_map<int, int> rankMap;
        int rank = 1;

        // Assign ranks to elements
        for (int i = 0; i < N; i++) {
            if (rankMap.find(arrWithIndices[i].first) == rankMap.end()) {
                rankMap[arrWithIndices[i].first] = rank;
                rank++;
            }
        }

        // Create the result array and replace elements with their ranks
        vector<int> result(N);
        for (int i = 0; i < N; i++) {
            result[arrWithIndices[i].second] = rankMap[arrWithIndices[i].first];
        }

        return result;

    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends