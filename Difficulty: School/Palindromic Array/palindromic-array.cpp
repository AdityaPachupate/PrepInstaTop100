//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
  public:
    bool PalinArray(vector<int> &arr) {
        // code here
        bool ans = true;
        
        for(int i=0;i<arr.size();i++){
            int num=arr[i];
            int rev=0;
            int rem=0;
            
            while(num!=0){
                rem=num%10;
                rev = rev*10 + rem;
                num=num/10;
            }
            
            if(rev!=arr[i]) 
            {
               return false;
                break;
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << (ob.PalinArray(arr) ? "true" : "false") << endl;
    }

    return 0;
}

// } Driver Code Ends