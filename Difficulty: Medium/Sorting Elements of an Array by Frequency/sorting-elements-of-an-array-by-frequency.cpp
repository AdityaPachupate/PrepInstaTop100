//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(int nums[],int n)
    {
        unordered_map<int, int> freqMap;

        // Counting frequency of each element.
        for (int i = 0; i < n; ++i) {
            freqMap[nums[i]]++;
        }

        // Converting the frequency map to a vector of pairs.
        vector<pair<int, int>> freqVec;
        for (auto& it : freqMap) {
            freqVec.push_back(it);
        }

        // Sorting based on frequency, and then by value.
        sort(freqVec.begin(), freqVec.end(), [](pair<int, int>& a, pair<int, int>& b) {
            if (a.second != b.second)
                return a.second > b.second;
            return a.first < b.first;
        });

        // Generating the result array.
        vector<int> result;
        for (auto& it : freqVec) {
            for (int i = 0; i < it.second; ++i) {
                result.push_back(it.first);
            }
        }

        return result;
    }
};

//{ Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}


// } Driver Code Ends